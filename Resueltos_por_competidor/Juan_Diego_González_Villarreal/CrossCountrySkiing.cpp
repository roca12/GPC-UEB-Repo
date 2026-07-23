/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Cross Country Skiing 
* Juez: USACO
* Veredicto: Accepted
* URL: https://usaco.org/index.php?page=viewproblem2&cpid=380
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
#define vpii  vector<pii>
#define ln "\n"
#define MAX 500
#define tiii tuple<int,int,int>
using namespace std;

int g [MAX][MAX];
set<pii> wp;
vpii d  = {{1,0},{-1,0},{0,1},{0,-1}};

struct CmpMenor{
    bool operator()(const tiii t1, const tiii t2){
        return get<0>(t1) > get<0>(t2);
    }
};

int bfs(pii start, int m, int n){
    vvi dist(m,vi(n, INT_MAX));
    priority_queue<tiii,vector<tiii>, CmpMenor> pq;
    tiii t = {0,start.first,start.second};
    pq.push(t);
    dist[start.first][start.second] = 0;
    int cnt = wp.size(), ans = 0;
    while(!pq.empty() && cnt>0){
        auto [cost,x,y] = pq.top();pq.pop();
        if(cost>dist[x][y])continue;
        if(wp.count({x,y})){
            wp.erase({x,y});
            cnt--;
            ans = max(ans,cost);
        }
        for(auto &[dx,dy]:d){
            int nx = x+dx,ny = y+dy;
            if(nx<0||nx>=m||ny<0||ny>=n)continue;
            int ncost = max(cost,abs(g[x][y]-g[nx][ny]));
            if(ncost<dist[nx][ny]){
                dist[nx][ny]=ncost;
                pq.push({ncost,nx,ny});
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ccski.in", "r", stdin);
    freopen("ccski.out", "w", stdout);
    int m,n;
    cin>>m>>n;
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            cin>>g[i][j];
        }
    }
    for(int i = 0; i<m;i++){
        for(int j = 0,val; j<n;j++){
            cin>>val;
            if(val)wp.insert(mp(i,j));
        }
    }
    cout<<bfs(*wp.begin(),m,n);
}