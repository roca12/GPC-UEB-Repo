/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Air Cownditioning II
* Juez Online: USACO
* Veredicto: Accepted 
* URL: https://usaco.org/index.php?page=viewproblem2&cpid=1276
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

vi stalls(101,0);
vvi  conds(20,vi(4));

bool check(int mask, int n, int m, int &total,int stallCnt){
    int cnt = 0;
    vector<int> red(101,0);
    vector<bool> flags(101, false);
    for(int i = 0; i<m; i++){
        if((mask>>i) & 1){
            int l = conds[i][0], r = conds[i][1];
            total+=conds[i][3];
            for(int j = l; j<=r; j++){
                red[j]+=conds[i][2];
                if(red[j]>=stalls[j] && stalls[j]!=0 && !flags[j])cnt++,flags[j]=true;
            }
        }
    }
    return cnt==stallCnt;
}

int main(){
    int n,m,stallCnt=0;
    cin>>n>>m;
    for(int i=0,s,t,c; i<n; i++){
        cin>>s>>t>>c;
        stallCnt+=abs(s-t)+1;
        for(int j = s; j<=t; j++)stalls[j]=c;
    }
    for(int i=0; i<m; i++){
        cin>>conds[i][0]>>conds[i][1]>>conds[i][2]>>conds[i][3];
    }
    int ans = 10000;
    for(int mask = 0;mask<(1<<m); mask++){
        int total = 0;
        if(check(mask,n,m,total,stallCnt)) ans = min(ans,total);
    }
    cout<<ans;
}

