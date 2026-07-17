/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Diamond Collector
* Juez Online: USACO
* Veredicto: Accepted 
* URL: https://usaco.org/index.php?page=viewproblem2&cpid=643
*/

#include<bits/stdc++.h>
typedef long long ll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define mp make_pair
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(),v.end()
#define um unordered_map
#define mm multimap
#define ms multiset
#define in insert
#define ln "\n"
using namespace std;


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   freopen("diamond.in", "r", stdin);
   freopen("diamond.out", "w", stdout);
    int n,k;
    cin>>n>>k;
    vi ds(n);
    for(int &d: ds)cin>>d;
    sort(all(ds));
    int can_take_left[n];
    int l = 0,r = 0;
    for(;l<n; l++){
        while(r<n && ds[r]-ds[l]<=k)r++;
        can_take_left[l]=r-l;
    }
    int max_after_i[n+1];
    max_after_i[n] = 0;
    for(int i = n-1; i>=0; i--){
        max_after_i[i] = max(can_take_left[i], max_after_i[i+1]);
    }
    int ans = 0;
    for(int l = 0; l<n; l++){
        ans = max(ans, can_take_left[l]+max_after_i[l+can_take_left[l]]);
    }
    cout<<ans;
}