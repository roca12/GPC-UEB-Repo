/*
 * Autor: Juan Martinez
 * Problema:  Sale (34B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/34/B
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, temp, sum = 0, indice;
    cin>>a>>b;
    vector<int> tvs;
    for(int i = 0; i < a; i++) {
        cin>>temp;
        if(temp < 0) tvs.push_back(abs(temp));
    }
    sort(tvs.begin(), tvs.end());
    indice = tvs.size()-1;
    while(b--){
        if(indice < 0) break;
        sum+= tvs[indice];
        indice--;
    }
    cout<<sum<<endl;
    return 0;
}
