/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Sum of Two Values
* Juez Online: CSES
* Veredicto: Accepted 
* URL: https://cses.fi/problemset/task/1640
*/

#include<bits/stdc++.h>
typedef long long ll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
using namespace std;



int main(){
    int n,x;
    cin>>n>>x;
    vector<pii> v(n);
    for(int i = 1; i<=n; i++){
        cin>>v[i-1].first;
        v[i-1].second = i;
    }

    sort(v.begin(), v.end());

    int l = 0,r = n-1;
    bool found = false;
    while(l<r){
        int sum = v[l].first+v[r].first;
        if(sum==x){
            found = true;
            break;
        }
        if(sum<x)l++;
        else r--;
    }
    if(found)cout<<v[l].second<<" "<<v[r].second;
    else cout<<"IMPOSSIBLE";
    }