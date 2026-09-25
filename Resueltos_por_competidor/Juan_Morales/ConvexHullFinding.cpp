/*
 * Autor: OtherSpanish
 * Problema: 681 - Convex Hull Finding
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: hhttps://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=622&mosmsg=Submission+received+with+ID+31310515
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

struct EnvolventeMonotoneChain {

  struct Punto {
    double x, y;
  };

  static double cruz(const Punto &a, const Punto &b, const Punto &c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
  }

  static vector<Punto> construir(vector<Punto> puntos) {
    int n = (int)puntos.size();
    if (n < 3)
      return puntos;

    sort(puntos.begin(), puntos.end(), [](const Punto &a, const Punto &b) {
      if (a.x != b.x)
        return a.x < b.x;
      return a.y < b.y;
    });

    vector<Punto> hull(2 * n);

    int k = 0;

    for (int i = 0; i < n; ++i) {
      while (k >= 2 && cruz(hull[k - 2], hull[k - 1], puntos[i]) <= 0)
        k--;
      hull[k++] = puntos[i];
    }

    int limiteInferior = k + 1;
    for (int i = n - 2; i >= 0; --i) {
      while (k >= limiteInferior &&
             cruz(hull[k - 2], hull[k - 1], puntos[i]) <= 0)
        k--;
      hull[k++] = puntos[i];
    }

    hull.resize(k - 1);

    return hull;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  if (!(cin >> tc))
    return 0;

  cout << tc << "\n";
  for (int t = 0; t < tc; ++t) {
    int vertexCount;
    cin >> vertexCount;

    vector<EnvolventeMonotoneChain::Punto> puntos(vertexCount);
    for (int i = 0; i < vertexCount; ++i) {
      cin >> puntos[i].x >> puntos[i].y;
    }

    auto hull = EnvolventeMonotoneChain::construir(puntos);

    cout << hull.size() + 1 << "\n";

    int indxAct = -1;
    int min = INT_MAX;
    EnvolventeMonotoneChain::Punto point;
    for (int i = 0; i < hull.size(); ++i) {
      if (hull[i].y < min) {
        min = hull[i].y;
        point = hull[i];
        indxAct = i;
      } else if (hull[i].y == min) {
        if (hull[i].x < point.x) {
          point = hull[i];
          indxAct = i;
        }
      }
    }
    vector<EnvolventeMonotoneChain::Punto> output;

    int checked = 0;
    int indx = indxAct;
    while (checked < hull.size()) {
      checked++;
      output.push_back(hull[indx]);
      if (indx == hull.size() - 1) {
        indx = 0;
      } else {
        indx++;
      }
    }

    for (const auto &point : output) {
      cout << point.x << " " << point.y << "\n";
    }
    cout << output[0].x << " " << output[0].y << "\n";

    if (t < tc - 1) {
      int separador;
      cin >> separador;
      cout << "-1\n";
    }
  }

  return 0;
}
