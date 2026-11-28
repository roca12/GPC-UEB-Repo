/*
 * Autor: Juan Martinez
 * Problema: Homework (2132A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2132/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t; cin>>t;
    int n, k;
    string a, b, c;
    while(t--) {
        cin>>n>>a>>k>>b>>c;
        deque<char> que;
        string res = "";
        for(int i = 0; i < n; i++) que.push_back(a[i]);
        for(int i = 0; i < k; i++) {
            if(c[i] == 'D') que.push_back(b[i]);
            else que.push_front(b[i]);
        }
        while(!que.empty()) {
            res += que.front();
            que.pop_front();
        }
        cout<<res<<ln;
    }
}
