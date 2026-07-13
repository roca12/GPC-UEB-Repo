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
#define pll pair<ll, ll>
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define in insert
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vi v(n);
    for(int &nums: v)cin>>nums;
    int l = 0,r=0,cnt = 0,s=0;
    while(r<n){
        s+=v[r];
        while(s>x){
            s-=v[l];
            l++;
        }
        if(s==x)cnt++;
        r++;
    }
    cout<<cnt;
}