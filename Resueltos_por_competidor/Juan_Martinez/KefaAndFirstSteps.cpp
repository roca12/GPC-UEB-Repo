/*
 * Autor: Juan Martinez
 * Problema: Kefa and First Steps(580A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/580/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp, con = 0, prev = 0, ma = 0; cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        if(prev <= temp){
            con++;
        } else {
            con = 1;
        }
        if(con > ma) ma = con;
        //cout<<con<<endl;
            prev = temp;
    }
    cout<<ma<<endl;
    return 0;
}
