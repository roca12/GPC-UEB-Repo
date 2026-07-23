/*
 * Autor: Juan Martinez
 * Problema: Dragons (230A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/230/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,n, t1, t2;
    cin>>s>>n;
    vector<pair<int,int>> drag(n);
    for(int i = 0; i < n; i++) {
        cin>>t1>>t2;
        drag[i] = {t1, t2};
    }
    sort(drag.begin(), drag.end());
    bool c = true;
    for(auto [f, b] : drag){
        if(s <= f) {
            c = false;
            break;
        } else {
            s += b;
        }
    }
    if(c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
