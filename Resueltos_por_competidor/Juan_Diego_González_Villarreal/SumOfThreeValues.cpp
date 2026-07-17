/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Sum Of Three Values
* Juez Online: CSES
* Veredicto: Accepted 
* URL: https://cses.fi/problemset/result/17913078/
*/

#include<bits/stdc++.h>
typedef long long ll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define mp make_pair
#define pll pair<ll, ll>
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define in insert
using namespace std;


int main(){
    ll n, x; 
    cin>>n>>x;
    if(n<3){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    vector<pll> v(n);
    for(int i = 1; i<=n; i++)cin>>v[i-1].first, v[i-1].second=i;
    sort(v.begin(),v.end());
    bool found = false;
    for(int i = 0;i<n; i++){
        int crr = v[i].first;
        int l = 0, r = n-1, m;
        while(l<r){
            if(l==i)l++;
            else if(r==i)r--;
            int s = crr+v[l].first+v[r].first;
            if(s==x){
                found = true;
                break;
            }
            if(s>x)r--;
            else l++;
        }
        if(found) {
            cout<<v[l].second<<" "<<v[r].second<<" "<<v[i].second;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}