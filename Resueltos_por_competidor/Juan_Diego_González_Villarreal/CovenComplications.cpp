#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pq priority_queue
#define ln "\n"
typedef long long ll;
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vvi adj(n+1,vi());
  vi arr(n+1);
  for(int i = 1; i<= n; i++)cin>>arr[i];
  for(int i = 0,a,b; i<m; i++){
      cin>>a>>b;
      if(min(arr[a],arr[b])==0 && max(arr[a],arr[b])>0){
          
          adj[min(arr[a],arr[b])==arr[a]? a:b].pb(max(arr[a],arr[b])==arr[a]? a:b);
      }
  }
  ll hi = 0;
  pq<ll> q;
  for(int i = 1; i<=n; i++){
      if(arr[i]!=0) continue;
      ll tmp = 0;
      for(int next: adj[i]){
          tmp+=arr[next];
      }
      q.push(tmp);
      hi+=tmp;
  }
  ll ans = 0;
  while(!q.empty()){
      hi-=q.top();
      q.pop();
      ans+=hi;
  }
  cout<<ans;
}
