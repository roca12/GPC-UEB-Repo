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
#define vb vector<bool>
#define ln "\n" 
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);
  int n,q;
  cin>>n>>q;
  vi breeds(n), hols_prefix(n+1,0), guern_prefix(n+1,0), jers_prefix(n+1,0);
  for(int &id: breeds)cin>>id;
  for(int i = 1; i<=n;i++){
        hols_prefix[i] = hols_prefix[i-1]+((breeds[i-1]==1)?1:0);
        guern_prefix[i]=guern_prefix[i-1]+((breeds[i-1]==2)?1:0);
        jers_prefix[i] = jers_prefix[i-1]+((breeds[i-1]==3)?1:0); 
  }
  while(q--){
    int a,b;
    cin>>a>>b;
    cout<<(hols_prefix[b]-hols_prefix[a-1])<<" ";
    cout<<(guern_prefix[b]-guern_prefix[a-1])<<" ";
    cout<<(jers_prefix[b]-jers_prefix[a-1])<<ln;
  }
}