/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Books
* Juez Online: Codeforces
* Veredicto: Accepted 
* URL: https://codeforces.com/contest/279/problem/B
* Rating: 1400
*/

#include<bits/stdc++.h>
typedef long long ll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define in insert
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vi bks(n);
    for(int &x: bks)cin>>x;
    int l = 0, ans = 0, time=0;
    for(int r = 0; r<n; r++){
        time+=bks[r];
        while(time>t){
            time-=bks[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout<<ans;
}