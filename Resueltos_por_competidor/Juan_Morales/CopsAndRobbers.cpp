/*
 * Autor: OtherSpanish
 * Problema: Cops And Robbers
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=297
 */

#include <bits/stdc++.h>
typedef double d;
using namespace std;

struct EnvolventeMonotoneChain {
  struct Punto {
    d x, y;
  };

  static double cruz(const Punto &a, const Punto &b, const Punto &c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
  }

  static vector<Punto> construir(vector<Punto> puntos) {
    int n = (int)puntos.size();
    if (n < 3)
      return {};
    sort(puntos.begin(), puntos.end(), [](const Punto &a, const Punto &b) {
      if (a.x != b.x)
        return a.x < b.x;
      return a.y < b.y;
    });

    vector<Punto> hull(2 * n);

    int k = 0;

    for (int i = 0; i < n; i++) {
      while (k >= 2 && cruz(hull[k - 2], hull[k - 1], puntos[i]) <= 0)
        k--;
      hull[k++] = puntos[i];
    }

    int limiteInferior = k + 1;

    for (int i = n - 2; i >= 0; i--) {
      while (k >= limiteInferior &&
             cruz(hull[k - 2], hull[k - 1], puntos[i]) <= 0)
        k--;
      hull[k++] = puntos[i];
    }

    hull.resize(k - 1);

    return hull;
  }
  static bool dentro(const vector<Punto> &poligono, const Punto &p) {
    int n = (int)poligono.size();
    const d EPS = 1e-9;
    if (n == 0)
      return false;
    if (n < 3) {
      const Punto &a = poligono[0], &b = poligono[n - 1];
      return fabs(cruz(a, b, p)) <= EPS &&
             min(a.x, b.x) - EPS <= p.x && p.x <= max(a.x, b.x) + EPS &&
             min(a.y, b.y) - EPS <= p.y && p.y <= max(a.y, b.y) + EPS;
    }
    const Punto &p0 = poligono[0];

    d cruzInicial = cruz(p0, poligono[1], p);
    d cruzFinal = cruz(p0, poligono[n - 1], p);
    if (cruzInicial < -EPS || cruzFinal > EPS)
      return false;

    int lo = 1, hi = n - 1;

    while (hi - lo > 1) {
      int medio = (lo + hi) / 2;
      if (cruz(p0, poligono[medio], p) >= -EPS)
        lo = medio;
      else
        hi = medio;
    }
    d d1 = cruz(p0, poligono[lo], p);
    d d2 = cruz(poligono[lo], poligono[hi], p);
    d d3 = cruz(poligono[hi], p0, p);
    return d1 >= -EPS && d2 >= -EPS && d3 >= -EPS;
  }
};

int main() {

  int c, r, o;
  int tc = 1;
  while (true) {
    cin >> c >> r >> o;
    if (c == 0 && r == 0 && o == 0)
      break;
    vector<EnvolventeMonotoneChain::Punto> cops(c);
    for (int i = 0; i < c; i++) {
      cin >> cops[i].x;
      cin >> cops[i].y;
    }
    vector<EnvolventeMonotoneChain::Punto> robbers(r);

    for (int i = 0; i < r; i++) {
      cin >> robbers[i].x;
      cin >> robbers[i].y;
    }

    vector<EnvolventeMonotoneChain::Punto> people(o);

    for (int i = 0; i < o; i++) {
      cin >> people[i].x;
      cin >> people[i].y;
    }

    auto hullCops = EnvolventeMonotoneChain::construir(cops);
    auto hullRobbers = EnvolventeMonotoneChain::construir(robbers);

    cout << "Data set " << tc << ":\n";
    tc++;
    for (int i = 0; i < o; i++) {
      EnvolventeMonotoneChain::Punto persona{people[i].x, people[i].y};
      bool dentroCops = EnvolventeMonotoneChain::dentro(hullCops, persona);
      bool dentroRobbers =
          EnvolventeMonotoneChain::dentro(hullRobbers, persona);

      if (dentroCops) {
        cout << "     Citizen at (" << persona.x << "," << persona.y << ") is safe."
             << "\n";
      } else if (dentroRobbers) {
        cout << "     Citizen at (" << persona.x << "," << persona.y
             << ") is robbed." << "\n";
      } else {
        cout << "     Citizen at (" << persona.x << "," << persona.y
             << ") is neither." << "\n";
      }
    }
    cout<<"\n";
  }

  return 0;
}
