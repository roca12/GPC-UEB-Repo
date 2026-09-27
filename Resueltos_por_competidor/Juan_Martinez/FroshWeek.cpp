/*
 * Autor: Juan Martinez
 * Problema: Frosh Week
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/F
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)
const int INF = 1e9;

ll mergex(vector<ll> &a, ll inicio, ll medio, ll fin, ll movs) {
    vector<ll> izq(a.begin() + inicio, a.begin() + medio + 1);
    vector<ll> der(a.begin() + medio + 1, a.begin() + fin + 1);
    ll i  = 0, j = 0, k = inicio;
    while(i < (ll)izq.size() && j < (ll)der.size()) {
        if(izq[i] <= der[j]) a[k++] = izq[i++];
        else {
            a[k++] = der[j++];
            movs += izq.size() - i;
        }
    }
    while(i < (ll)izq.size()) a[k++] = izq[i++];
    while(j < (ll)der.size()) a[k++] = der[j++];
    return movs;
}

ll mergeSort(vector<ll> &a, ll inicio, ll fin, ll movs) {
    if(inicio >= fin) return movs;
    ll medio = (inicio + fin )/ 2;
    movs = mergeSort(a, inicio, medio, movs);
    movs = mergeSort(a, medio + 1, fin, movs);
    movs = mergex(a, inicio, medio, fin, movs);
    return movs;
}

int main()
{
    ll n, e, res;
    while(cin>>n) {
        res = 0;
        vector<ll> est;
        for(int i = 0; i < n; i++) {
            cin>>e;
            est.push_back(e);
        }
        res = mergeSort(est, 0, (ll)est.size()-1, 0);
        cout<<res<<"\n";
    }
    return 0;
}
