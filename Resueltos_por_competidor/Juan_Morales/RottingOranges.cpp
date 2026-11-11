/*
 * Autor: OtherSpanish
 * Problema: Rotting Oranges
 * Juez online: LeetCode
 * Veredicto: Accepted
 * URL: https://leetcode.com/problems/rotting-oranges/
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, 1, -1};

int main() {

    vector<vector<char>> grid;

    int R = grid.size(), C = grid[0].size();

    vector<vector<int>> dist(R, vector<int>(C, -1));
    queue<pair<int,int>> q;
    int freshOr = 0;
     for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            if (grid[r][c] == 2) {
                dist[r][c] = 0;
                q.push({r, c});
            } else if(grid[r][c] == 1){
                freshOr++;
            }
        }
    }   

    int maxim = 0;
    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d];
            int nc = c + dc[d];
            
            if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
            if (dist[nr][nc] != -1) continue;
            if (grid[nr][nc] != 1) continue;   
            freshOr--;

            dist[nr][nc] = dist[r][c] + 1;
            maxim = max(maxim, dist[r][c]+1);
            q.push({nr, nc});
        }
    }

    if(freshOr>0) cout<<-1<<"\n";
    else cout<<maxim<<"\n";

    return 0;

}


/*
LeetCode format:

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, 1, -1};
        int R = grid.size(), C = grid[0].size();

        vector<vector<int>> dist(R, vector<int>(C, -1));
        queue<pair<int,int>> q;
        int freshOr = 0;

        for (int r = 0; r < R; r++)
            for (int c = 0; c < C; c++)
                if (grid[r][c] == 2) { dist[r][c] = 0; q.push({r, c}); }
                else if (grid[r][c] == 1) freshOr++;

        int maxim = 0;
        while (!q.empty()) {
            auto [r, c] = q.front(); q.pop();
            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d], nc = c + dc[d];
                if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
                if (dist[nr][nc] != -1) continue;
                if (grid[nr][nc] != 1) continue;
                freshOr--;
                dist[nr][nc] = dist[r][c] + 1;
                maxim = max(maxim, dist[nr][nc]);
                q.push({nr, nc});
            }
        }
        return freshOr > 0 ? -1 : maxim;
    }
};
*/
