#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pii pair<double,double>
#define vp vector<pii>
#define mp make_pair
#define pq priority_queue
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define ln "\n"
typedef long long ll;
using namespace std;

pii w [3][3] = {{{0,0},{1,0},{0,1}},{{0,1},{0,0},{1,0}},{{1,0},{0,1},{0,0}}};
pii l [3][3] = {{{0,0},{0,1},{1,0}},{{1,0},{0,0},{0,1}},{{0,1},{1,0},{0,0}}};

double calcWin(pii p){
    if(p.first+p.second == 0)return -1;
    return p.first/(p.first+p.second);
}

int main(){
    map<string,int> m = {{"rock",0},{"scissors",1},{"paper",2}};
    int n,k;
    while(cin>>n>>k){
        if(n==0)break;
        int games = n*k*(n-1)/2;
        vp pl(n+1, mp(0,0));
        DBG(games);
        for(int i = 0; i<games; i++){
            string m1, m2;
            double p1,p2;
            cin>>p1>>m1>>p2>>m2;
            pii win = w[m[m1]][m[m2]];
            pii los = l[m[m1]][m[m2]];
            pl[p1].first+=win.first;
            pl[p2].first+=win.second;
            pl[p1].second+=los.first;
            pl[p2].second+=los.second;
        }
        for(int i = 1; i<=n; i++){
            double tmp = calcWin(pl[i]);
            if(tmp==-1)cout<<"-"<<ln;
            else printf("%.3f \n", tmp);
        }
        cout<<ln;
    }
}
