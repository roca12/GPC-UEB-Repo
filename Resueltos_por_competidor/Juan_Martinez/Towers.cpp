/*
 * Autor: Juan Martinez
 * Problema: Towers (37A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/37/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp; cin>>n;
        map<int,int> m;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        m[temp]++;
    }
    int maxi = 0;
    for(auto [val,cant] :m){
        maxi = max (maxi, cant);
    }
    cout<<maxi<<" "<<m.size()<<endl;
}
