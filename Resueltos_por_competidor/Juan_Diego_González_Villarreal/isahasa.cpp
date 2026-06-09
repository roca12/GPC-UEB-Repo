#include<bits/stdc++.h>
#define um unordered_map
#define pb push_back
#define pis pair<int, string>
#define mp make_pair
#define MAX 1005
using namespace std;
vector<pis> adj[MAX];

bool isBFS(int from, int to, int n){
    um<int,string> visited;
    queue<int> q;
    q.push(from);
    visited[from]="is-a";
    while(!q.empty()){
        int crr = q.front();
        q.pop();
        for(auto ngb: adj[crr]){
            if(visited[ngb.first]=="is-a") continue;
            if(ngb.second=="is-a"){
                visited[ngb.first]="is-a";
                q.push(ngb.first);
            }
        }
    }
    return (visited.count(to)&&visited[to]=="is-a");
}

bool hasBFS(int from, int to, int n){
    um<int,string> visited;
    queue<int> hasQ,isQ;
    hasQ.push(from);
    while(!hasQ.empty()||!isQ.empty()){
        int crr;
        if(!hasQ.empty()){
            crr = hasQ.front();
            hasQ.pop();
        } else {
            crr = isQ.front();
            isQ.pop();
        }
        for(auto ngb: adj[crr]){
            if(visited[ngb.first]=="has-a"){
                continue;
            }else if(visited[ngb.first]=="is-a"){
                if(visited[crr]=="has-a"||ngb.second=="has-a"){
                    visited[ngb.first]="has-a";
                    hasQ.push(ngb.first);
                }
            }else{
                if(visited[crr]=="has-a"||ngb.second=="has-a"){
                    visited[ngb.first]="has-a";
                    hasQ.push(ngb.first);
                }else{
                    visited[ngb.first]="is-a";
                    isQ.push(ngb.first);
                }
            }
        }
    }
    return (visited.count(to) && visited[to]=="has-a");
}

int main(){
    int n,m,unique=0;
    string o1,r,o2;
    cin>>n>>m;
    um <string, int> idx; 
    for(int i=0;i<n;i++){
        cin>>o1>>r>>o2;
        if(!idx.count(o1))idx[o1]=unique++;
        if(!idx.count(o2))idx[o2]=unique++;
        adj[idx[o1]].pb(mp(idx[o2], r));
    }
    for(int i = 0;i<m;i++){
        cin>>o1>>r>>o2;
        cout<<"Query "<<(i+1)<<": ";
        if(!idx.count(o1))idx[o1]=unique++;
        if(!idx.count(o2))idx[o2]=unique++;
        bool works;
        if(r=="is-a"){
            works = isBFS(idx[o1],idx[o2],unique);
        }else{
            works = hasBFS(idx[o1],idx[o2],unique);
        }
        cout<<(works?"true":"false");
        cout<<endl;
    }
}