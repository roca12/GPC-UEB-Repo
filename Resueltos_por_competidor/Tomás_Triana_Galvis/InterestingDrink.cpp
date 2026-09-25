#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Interesting Drink
 * Juez online: Codeforces 706B
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/706/B
 **/


int main()
{
    ll n,q,x,ans;
    cin>>n;
    int izq=-1,der=(int) n-1;
    vector<ll> arr(n);
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cin>>q;
    while(q--){
        izq=-1,der=(int) n-1;
        cin>>x;
        while(izq<der){
            int medio = izq+(der-izq+1)/2;
            if(arr[medio]<=x) izq =medio;
            else der =medio-1;
        }
        cout<<izq+1<<"\n";



    }


    return 0;
}
