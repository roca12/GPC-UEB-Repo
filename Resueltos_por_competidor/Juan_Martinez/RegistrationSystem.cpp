/*
 * Autor: Juan Martinez
 * Problema: Registration system (4C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/4/C
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	map<string, int> names;
    int t; cin>>t;
    string temp;
    while(t--) {
        cin>>temp;
        if(names[temp] > 0) {
            cout<<temp<<names[temp]<<endl;
            names[temp]++;
        } else {
            names[temp]++;
            cout<<"OK"<<endl;
        }
    }
}
