/*
 * Autor: Jorge Nuñez
 * Problema: A Number Between Two Others
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2225/A
 */
#include <bits/stdc++.h>
#define ln "\n"
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll , ll>>
#define dbg(x) cerr << x << " <-----" << "DEBUG" << ln;
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define add(x) push_back(x)
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int c;
    cin>>c;

    while(c--){
        ll x,y;
        cin>>x>>y;
        ll z = x-y;
        if(z!=0){
            if(z%x==0&&y%z==0){
                cout<<"No"<<ln;
            }else{
                cout<<"Yes"<<ln;
            }
        }else{
                cout<<"No"<<ln;
            }
    }
}