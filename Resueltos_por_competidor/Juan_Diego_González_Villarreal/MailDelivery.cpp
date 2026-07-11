#include <bits/stdc++.h>
#define MAX 100001
#define DBG(X) cerr<<#X<<": "<<(X)<<"\n";
using namespace std;

vector<int> ans;
vector<vector<int>> adj(MAX,vector<int>());

void eulerTour(int v, int n,int m){
    stack<int> st;
    bool isEulerCycle=false;
    int oddCnt = 0;
    for(int i = 1; i<=n; i++){
        oddCnt+=(adj[i].size()%2!=0)?1:0;
    }
    isEulerCycle = oddCnt==0; 
    if(!isEulerCycle){
        cout<<"IMPOSSIBLE";
        return;
    }
    st.push(v);
    while(!st.empty()){
        int crr = st.top();
        if(adj[crr].empty()){
            ans.push_back(crr);
            st.pop();
        }else{
            int next = adj[crr][0];
            adj[crr].erase(adj[crr].begin());
            adj[next].erase(find(adj[next].begin(),adj[next].end(),crr));
            st.push(next);
        }
    }
    if(isEulerCycle && ans.size()-1==m){
        for(int val: ans)cout<<val<<" ";
    }else cout<<"IMPOSSIBLE";
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1,a,b;i<=m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(adj[1].empty()){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    eulerTour(1,n,m);
}