/*
* Autor: pgms1103-afk
* Problema: 2237A - Destroying Towers
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2237/A
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int torre;
        cin>>torre;
        vector<int> alturaTorres(torre);
        for(int j = 0; j<torre; j++){
            cin>>alturaTorres[j];
        }

        sort(alturaTorres.begin(), alturaTorres.end());
        int torreMasBaja = alturaTorres.front();
        int torreMasAlta = alturaTorres.back();
        int k = (torreMasAlta - torreMasBaja) + 1;

        cout<<k<<endl;
    }
    return 0;
}
