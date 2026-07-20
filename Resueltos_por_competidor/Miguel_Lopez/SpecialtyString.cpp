/*
 * Autor: Miguel Lopez
 * Problema: Specialty String
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2200/C
 * Difficulty: 900
 */

#include <bits/stdc++.h>
#include <cctype>
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
/*
vector<vector<int>> adj(100001);
*/
int main() {
    init_code();
    int t; cin >> t;
    while(t--) {
        int cont = 0;
        int n; cin >> n;
        string a; cin >> a;
        cin.ignore();
        stack<char> aver;
        for(char c: a) {
            if(aver.empty()) {
                aver.push(c);
            }
            else {
                if(c == aver.top()) {
                    aver.pop();
                }
                else {
                    aver.push(c);
                }
            }
        }
        if(aver.empty()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}

