/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Paired Up
* Juez Online: USACO
* Veredicto: Accepted 
* URL: https://usaco.org/index.php?page=viewproblem2&cpid=738
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
    freopen("pairup.in","r", stdin);
    freopen("pairup.out","w", stdout);
    int n;
    cin>>n;
    vector<pii> v(n);
    for(pii &p:v)cin>>p.second>>p.first;
    sort(v.begin(), v.end());
    int l = 0, r=n-1, ans = 0;
    while(l<=r){
        int prs = min(v[l].second,v[r].second);
        ans = max(ans,v[l].first+v[r].first);
        v[l].second-=prs;
        v[r].second-=prs;
        if(v[l].second<=0)l++;
        if(v[r].second<=0)r--;
    }
   cout<<ans;
}