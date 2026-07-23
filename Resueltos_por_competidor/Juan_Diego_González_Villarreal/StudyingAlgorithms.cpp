/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: 
* Juez: 
* Veredicto: Accepted
* URL: 
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
#define ln "\n"
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vi v(n);
    for(int &val: v)cin>>val;
    sort(v.begin(), v.end());
    int cnt = 0, sum = 0;
    for(int val: v){
        if(sum+val<=x)cnt++, sum+=val;
    }
    cout<<cnt;
}