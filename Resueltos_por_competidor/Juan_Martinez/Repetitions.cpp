/*
 * Autor: Juan Martinez
 * Problema: Repetitions
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1069/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	string s; cin>>s;
    int con = 0, maxi = 0;
    for(int i = 0; i < s.size(); i++){
        if(i == 0) con++;
        else {
            (s[i] == s[i-1]) ? con++ : con = 1;
            //cout<<con<<endl;
        }
        maxi = max(con, maxi);
    }
    cout<<maxi;
}
