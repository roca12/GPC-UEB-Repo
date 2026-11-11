/*
 * Autor: OtherSpanish
 * Problema: Monsters
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/result/19340739
*/

#include <bits/stdc++.h>
#include <climits>
using namespace std;
typedef long long ll;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, 1, -1};

int main() {

  int R, C;
  cin >> R >> C;

  vector<vector<char>> grid(R, vector<char>(C));
  vector<vector<int>> dist_a(R, vector<int>(C, -1));
  vector<vector<int>> dist_m(R, vector<int>(C, -1));
  vector<vector<pair<int, int>>> parent(R, vector<pair<int, int>>(C, {-1, -1}));

  for (int r = 0; r < R; r++)
    for (int c = 0; c < C; c++)
      cin >> grid[r][c];

  queue<pair<int, int>> q;

  pair<int, int> aPos;
  for (int r = 0; r < R; r++) {
    for (int c = 0; c < C; c++) {
      if (grid[r][c] == 'M') {
        dist_m[r][c] = 0;
        q.push({r, c});
      } else if (grid[r][c] == 'A') {
        dist_a[r][c] = 0;
        aPos = {r, c};
      }
    }
  }

  while (!q.empty()) {
    auto [r, c] = q.front();
    q.pop();

    for (int d = 0; d < 4; d++) {
      int nr = r + dr[d];
      int nc = c + dc[d];

      if (nr < 0 || nr >= R || nc < 0 || nc >= C)
        continue;
      if (grid[nr][nc] == '#')
        continue;
      if (dist_m[nr][nc] != -1)
        continue;

      dist_m[nr][nc] = dist_m[r][c] + 1;
      q.push({nr, nc});
    }
  }
  q.push(aPos);
  int len = INT_MAX;
  bool flag = false;
  pair<int, int> end;
  while (!q.empty()) {
    auto [r, c] = q.front();
    q.pop();

    for (int d = 0; d < 4; d++) {
      int nr = r + dr[d];
      int nc = c + dc[d];

      if (nr < 0 || nr >= R || nc < 0 || nc >= C) {
        continue;
      }

      if (grid[nr][nc] == '#')
        continue;
      if (dist_a[nr][nc] != -1)
        continue;

      int distAct = dist_a[r][c] + 1;

      if (dist_m[nr][nc] != -1 && distAct >= dist_m[nr][nc])
        continue;

      if (nr == 0 || nr == R - 1 || nc == 0 || nc == C - 1) {
        flag = true;
        end = {nr, nc};
      }

      parent[nr][nc] = {r, c};
      dist_a[nr][nc] = dist_a[r][c] + 1;
      len = min(len, dist_a[nr][nc]);
      q.push({nr, nc});
    }

    if (flag)
      break;
  }

  if (!flag) {
    if (aPos.first == R - 1 || aPos.second == C - 1) {
      cout << "YES" << "\n";
      cout << 0 << "\n";
    } else {
      cout << "NO" << "\n";
    }
  } else {
    string path = "";
    pair<int, int> cur = end;
    while (cur != aPos) {
      auto [pr, pc] = parent[cur.first][cur.second];
      int diffr = cur.first - pr;
      int diffc = cur.second - pc;
      if (diffr == -1)
        path += 'U';
      else if (diffr == 1)
        path += 'D';
      else if (diffc == 1)
        path += 'R';
      else
        path += 'L';
      cur = {pr, pc};
    }
    reverse(path.begin(), path.end());
    cout << "YES" << "\n";
    cout << path.size() << "\n";
    cout << path << "\n";
  }

  return 0;
}
