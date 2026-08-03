/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Milky Visits
* Juez: USACO
* Veredicto: Accepted
* URL: https://usaco.org/index.php?page=viewproblem2&cpid=968
*/

#include<bits/stdc++.h>
typedef long long ll;
typedef double long dll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
#define vvi vector<vi>
#define mpii map<int,int>
#define um unordered_map
#define mpis map<int,string>
#define mpsi map<string,int>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define DBGARR(a, n) { cerr << #a << " = [ "; for (int i = 0; i < (n); i++) cerr << (a)[i] << " "; cerr << "]" << endl; }
#define vll vector<ll>
#define vb vector<bool>
#define ln "\n" 
using namespace std;

vvi adj;

int dfs(int crr,int dest, char c, vb &vis,string &g){
    int cnt = 0;
    if(crr == dest){
        if(g[crr]==c)return 1;
        return 0;
    }
    vis[crr]=true;
    for(int next:adj[crr]){
        if(!vis[next]){
            return dfs(next,dest,c, vis,g);
        }
    }
    return cnt;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("milvisits.in", "r", stdin);
    //freopen("milkvisits.out", "w", stdout);
    int n,m;    
    string g;
    cin>>n>>m;

    cin>>g;
    g = ' '+g;
    adj.resize(n+1, vi());
    for(int i = 0,x,y;i<n-1;i++){
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    for(int i = 0,a,b,cnt = 0; i<m; i++){
        char c;
        cin>>a>>b>>c;
        vb vis(n+1,false);
        bool ans = dfs(a,b,c,vis,g)>0;
        if(ans)cout<<1;
        else cout<<0;
    }
}