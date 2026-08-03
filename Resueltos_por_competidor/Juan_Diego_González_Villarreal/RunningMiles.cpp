/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Running Miles 
* Juez: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/contest/1826/problem/D
* Rating: 1700
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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi beauty(n);
    for(int &x:beauty)cin>>x;
    vi pref_max(n), suff_max(n);
    for(int i = 0;i<n;i++){
        pref_max[i] = beauty[i]+i;
        suff_max[i] = beauty[i]-i;
    }
    for(int i = 1;i<n;i++)pref_max[i] = max(pref_max[i], pref_max[i-1]);
    for(int i = n-2;i>=0;i--)suff_max[i] = max(suff_max[i], suff_max[i+1]);
    int ans = 0;
    for(int i = 1; i<n-1;i++){
        ans = max(ans,pref_max[i-1]+beauty[i]+suff_max[i+1]);
    }
    cout<<ans<<ln;
  }
}