/*
 * Autor: Juan Martinez
 * Problema: Football (43A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/43/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> teams;
    int n; cin>>n;
    string s;
    for(int i = 0; i < n; i++) {
        cin>>s;
        teams[s]++;
    }
    s = "";
    int canti = 0;
    for(auto [val , cant] : teams){
        if(cant > canti) {
            s = val;
            canti = cant;
        }
    }
    cout<<s<<endl;
}
