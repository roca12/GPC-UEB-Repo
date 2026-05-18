/*
 * Autor: Juan Martinez
 * Problema: Even Odds (318A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/318/A
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
   ll n,k, aux, aux2;
   cin>>n>>k;
   if(n%2 != 0) n = n +1;

    if((n/2) >= k){
            aux2 = 1;
            k = (n/2) + (k-(n/2)) - 1;
    } else {
        aux2 = 2;
            k = k - (n/2) - 1;
    }
    for(int i = 0; i < k; i++){
        aux2 +=2;
    }
        cout<<aux2<<endl;
}
