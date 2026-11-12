/*
 * Autor: OtherSpanish
 * Problema: Geometry And A Square
 * Juez online: SPOJ
 * Veredicto: Accepted
 * URL: https://www.spoj.com/problems/GEOM/en
 */

#include <bits/stdc++.h>
typedef double d;
using namespace std;

struct LineaGeneral {
  double a, b, c;
  LineaGeneral() {}
  LineaGeneral(d x1, d y1, d x2, d y2) {
    a = y2 - y1;
    b = x1 - x2;
    c = -(a * x1 + b * y1);
  }
  bool contiene(d x, d y) { return fabs(a * x + b * y + c) < 1e-9; }
};

int main() {
  d cx, cy;
  d L;
  d px, py;

  while (cin >> cx >> cy >> L >> px >> py) {
    pair<d, d> A, B, C, D, P;
    P = {px, py};

    A = {cx - (L / 2), cy + (L / 2)};
    B = {cx + (L / 2), cy + (L / 2)};
    C = {cx + (L / 2), cy - (L / 2)};
    D = {cx - (L / 2), cy - (L / 2)};
    pair<d, d> AP, BP, CP, DP;
    BP = {P.first - B.first, P.second - B.second};
    CP = {P.first - C.first, P.second - C.second};
    DP = {P.first - D.first, P.second - D.second};
    AP = {P.first - A.first, P.second - A.second};
    pair<d, d> octAP, octBP, octCP, octDP;
    octBP = {-BP.second, BP.first};
    octCP = {-CP.second, CP.first};
    octDP = {-DP.second, DP.first};
    octAP = {-AP.second, AP.first};

    LineaGeneral l[4];
    l[0] = LineaGeneral(A.first, A.second, A.first + octBP.first,
                        A.second + octBP.second);
    l[1] = LineaGeneral(B.first, B.second, B.first + octCP.first,
                        B.second + octCP.second);
    l[2] = LineaGeneral(C.first, C.second, C.first + octDP.first,
                        C.second + octDP.second);
    l[3] = LineaGeneral(D.first, D.second, D.first + octAP.first,
                        D.second + octAP.second);

    bool flag = false;
    for (int i = 0; i < 4 && !flag; i++) {
      for (int j = i + 1; j < 4 && !flag; j++) {
        d det = l[i].a * l[j].b - l[j].a * l[i].b;
        if (fabs(det) < 1e-9)
          continue;

        d x = (l[i].b * l[j].c - l[j].b * l[i].c) / det;
        d y = (l[j].a * l[i].c - l[i].a * l[j].c) / det;

        bool todas = true;
        for (int k = 0; k < 4; k++) {
          if (!l[k].contiene(x, y)) {
            todas = false;
            break;
          }
        }
        
        if (todas) {
          cout << "YES" << "\n";
          cout << fixed << setprecision(1) << x << " " << y << "\n";
          flag = true;
        }
      }
    }
    if (!flag)
      cout << "NO" << "\n";
  }

  return 0;
}
