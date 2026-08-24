/*
 * Autor: Miguel Lopez
 * Problema: Axles And Gears
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Kattis-gearsandaxles
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int MAX = 100005;
vector<vector<int>> cant(MAX);
int main() {
    //init_code();
    int t; cin >> t;
    double res = 0;
    while(t--) {
        int a,b; cin >> a >> b;
        cant[a].push_back(b);
    }
    //sort(cant.begin(), cant.end());
    for(int i = 1; i < MAX; i++) {
        if(cant[i].size() < 2) continue;
        sort(cant[i].begin(), cant[i].end());
        int l = 0, r = (int)cant[i].size()-1;
        while(l < r) {
            if(cant[i][r] > cant[i][l]) {
                res+=log(cant[i][r]) - log(cant[i][l]);
            }
            l++;
            r--;
        }
    }
    cout << fixed << setprecision(16) << res << endl;
}
//10 27 10 27
// 10 10 27 27
// 27/10 * 27/10;


