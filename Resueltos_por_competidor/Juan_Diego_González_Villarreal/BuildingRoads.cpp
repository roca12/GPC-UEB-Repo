/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Building Roads
* Juez Online: CSES
* Veredicto: Accepted 
* URL: https://cses.fi/problemset/task/1666
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
#define pl pair<ll,ll>
#define all(v) v.begin(),v.end()
#define um unordered_map
#define mm multimap
#define ms multiset
#define in insert
#define ln "\n"
using namespace std;

vvi adj;
vi v;
vi roots;

bool bfs(int from, int t){
    if(v[from]>0) return false;
    roots.pb(from);
    queue<int> q;
    q.push(from);
    while(!q.empty()){
        int crr = q.front();
        q.pop();
        v[crr] = t;
        for(int next: adj[crr]){
            if(v[next]==0){
                q.push(next);
            }
        }
    }
    return true;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   //freopen("file.in", "r", stdin);
   //freopen("file.out", "w", stdout);
   int n,m;
   cin>>n>>m;
   adj.resize(n+1,vi());
   for(int i = 0,a,b; i<m; i++){
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
   }
   v.resize(n+1, 0);
   int t = 1;
    for(int i = 1; i<=n; i++){
        if(bfs(i,t)) t++;
    }
    cout<<t-2<<ln;
    for(int i = 1; i<roots.size(); i++){
        cout<<roots[i-1]<<" "<<roots[i]<<ln;
    }
}