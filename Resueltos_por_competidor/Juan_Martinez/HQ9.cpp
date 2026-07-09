/*
 * Autor: Juan Martinez
 * Problema: HQ9+ (133A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/133/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool b = false;
    cin>>s;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {b =true; break;}
    if(b) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    return 0;
}
