/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Maximum Subarray
* Juez: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1643
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
  int n;
  cin>>n;
  vll prefix(n+1);
  for(int i = 1; i<=n;i++){
    cin>>prefix[i];
    prefix[i]+=prefix[i-1];
  }
  ll prefix_min = prefix[0], max_subarray_sum = prefix[1];
  for(int i = 1;i<=n;i++){
    max_subarray_sum = max(max_subarray_sum, prefix[i]-prefix_min);
    prefix_min = min(prefix_min, prefix[i]);
  }
  cout<<max_subarray_sum<<ln;
}