/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: 
* Juez Online: 
* Veredicto: Accepted 
* URL: 
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
#define in insert
using namespace std;

ll llmax(ll a, ll b){
    if(a>b)return a;
    else return b;
}

int main(){
    int n,m;
    cin>>n>>m;
    vll cits(n), tows(m);
    for(ll &x: cits) cin>>x;
    for(ll &x: tows) cin>>x;
    int t = 0;
    ll hi = 0;
    for(int c = 0; c<n; c++){
        int currDist = abs(cits[c]-tows[t]);
        int nextTow = (t<m-1)?abs(cits[c]-tows[t+1]):nextTow;
        while(currDist>=nextTow && t<m-1){
            currDist = nextTow;
            t++;
            nextTow = (t<m-1)?abs(cits[c]-tows[t+1]):nextTow;
        }
        hi = llmax(hi, currDist);
    }
    cout<<hi;
}