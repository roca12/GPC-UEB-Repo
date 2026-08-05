/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Harder Horizons
* Juez: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/gym/106178/problem/H
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
  int hi = 0;
  ll cnt=0;
  for(int i = 0,val; i<n;i++){
    cin>>val;
    if(val>hi){
        cnt++;
    }
    hi = max(hi,val);
  }
  cout<<cnt<<ln;
}