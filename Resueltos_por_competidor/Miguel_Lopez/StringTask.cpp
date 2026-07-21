/*
 * Autor: Miguel Lopez
 * Problema: String Task
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/118/A
 * Difficulty: 1000
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
    string asd; cin >> asd;
   // cout << asd << endl;
    for(int i = 0; i < asd.length(); i++) {
        asd[i] = tolower(asd[i]);
    }
    queue<char> test;
    for(int i = 0; i < asd.length(); i++) {
        if(asd[i] != 'a' && asd[i] != 'o' && asd[i] != 'y' && asd[i] != 'e' && asd[i] != 'u' && asd[i] != 'i') {
            test.push(asd[i]);
        }
    }
    while(!test.empty()) {
        cout << "." << test.front();
        test.pop();
    }
}

