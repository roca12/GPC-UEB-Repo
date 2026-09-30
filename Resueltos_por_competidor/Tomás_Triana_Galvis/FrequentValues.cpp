#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Frequent Values
 * Juez online: UVA 11235
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2176
 **/


struct SparseTable {
  vector<vector<int>> sp;
  vector<int> lg;
  int n;

  SparseTable(vector<int> &a) {
    n = a.size();
    lg.assign(n + 1, 0);
    for (int i = 2; i <= n; i++)
      lg[i] = lg[i / 2] + 1;
    int K = lg[n] + 1;
    sp.assign(K, vector<int>(n));
    sp[0] = a;
    for (int k = 1; k < K; k++)
      for (int i = 0; i + (1 << k) <= n; i++)
        sp[k][i] = max(sp[k - 1][i], sp[k - 1][i + (1 << (k - 1))]);
  }

  int query(int l, int r) { 
    int k = lg[r - l + 1];
    return max(sp[k][l], sp[k][r - (1 << k) + 1]);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int arrSize = -1, queries;
  while (true) {
    cin >> arrSize;
    if (arrSize == 0) {
      break;
    }
    cin >> queries;
    vector<int> nums(arrSize);
    for (int i = 0; i < arrSize; i++) {
      cin >> nums[i];
    }

    vector<int> id, st, en, len;

    int contSt = 0, contEn = 0;

    for (int i = 1; i <= arrSize; i++) {
      if (nums[i] == nums[i - 1]) {
        contEn++;
      }
      if (i == arrSize || nums[i] != nums[i - 1]) {
        st.push_back(contSt);
        en.push_back(contEn);
        contEn++;
        contSt = contEn;
      }
    }

    for (int i = 0; i < st.size(); i++) {
      int longitud = en[i] - st[i] + 1;
      len.push_back(longitud);
    }
    int cont = 0;
    for (int i = 0; i < len.size(); i++) {
      int num = len[i];
      while (num--) {
        id.push_back(cont);
      }
      cont++;
    }

    int l, r;
    SparseTable spars(len);

    for (int i = 0; i < queries; i++) {
      cin >> l >> r;
      l--;
      r--;

      int bloqueL = id[l], bloqueR = id[r];
      if (bloqueL == bloqueR) {
        cout << (r - l + 1) << "\n";
        continue;
      }

      int BLCortado, BRCortado;
      BLCortado = en[bloqueL] - l + 1;
      BRCortado = r - st[bloqueR] + 1;

      int ans;
      if (bloqueL + 1 <= bloqueR - 1) {
        int bloqueM = spars.query(bloqueL+1, bloqueR-1);
        ans = max(BLCortado, BRCortado);
        ans = max(ans, bloqueM);
      } else {
        ans = max(BLCortado, BRCortado);
      }

      cout << ans << "\n";
    }
  }

  return 0;
}
