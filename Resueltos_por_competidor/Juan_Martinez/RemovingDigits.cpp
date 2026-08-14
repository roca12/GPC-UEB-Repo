/*
 * Autor: Juan Martinez
 * Problema: Removing Digits
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1637/
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
    int con = 0, maxi;
    while(stoi(s) > 0) {
        maxi = 0;
        for(int i = 0; i < s.size(); i++) {
            maxi = max(maxi, s[i] - '0');
            if(maxi == 9) break;
        }
        s = to_string((stoi(s) - maxi));
        con++;
    }
    cout<<con<<endl;
}
