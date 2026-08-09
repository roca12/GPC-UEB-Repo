/*
 * Autor: Juan Martinez
 * Problema: Move Brackets (1374C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1374/C
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, maxi, con; cin>>t;
    string s;
    while(t--) {
        con = 0, maxi = 0;
        cin>>a;
        cin>>s;
         for(char c: s) {
            if(c == ')') con++;
            else con--;
            maxi = max(maxi, con);
         }
        cout<<maxi<<endl;
    }
}
