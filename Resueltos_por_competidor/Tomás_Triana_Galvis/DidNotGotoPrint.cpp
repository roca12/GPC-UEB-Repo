#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Did Not Go to Print
 * Juez online: Codeforces 2275B
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2275/problem/B
 **/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t,cuenta;
    string a;
    cin>>t;
    while(t--){
        cuenta =0;
        vector<int> ans;
        stack<int> mem;
        map<int,bool> vis;
        cin>>n;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                mem.push(i+1);
            }else if(a[i] == '2'){
                if(!mem.empty()){
                    vis[mem.top()]=true;
                    mem.pop();
                }else{
                    vis[i+1] =true;
                }
            }else{
                vis[i+1] =true;
            }
        }
 
        for(int i =1;i<=n;i++){
            if(!vis[i]){
                cuenta++;
                ans.push_back(i);
            }
        }
        cout<<cuenta<<"\n";
        for(int i=0;i<cuenta;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
 
 
    return 0;
}
