#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
 * Autor: Tomás Triana Galvis
 * Problema: Contest Advancement
 * Juez online: Kattis contestadvancement
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/contestadvancement
 **/ 
int main()
{
    ll n,k,c,cont =0,a,b;
    pair<int,int> temp;
    cin>>n>>k>>c;
    map<int,int> vis;
    queue<pair<int,int>> ans,ans2;
    vector<int> ansa(n,-1);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        temp = make_pair(a,i);
        if(vis[b]<c){
            ans.push(temp);
        }else{
            ans2.push(temp);
        }
        vis[b]++;

    }
    while(!ans.empty()){
        if(cont==k){
            break;
        }
        ansa[ans.front().second]=ans.front().first;
        ans.pop();
        cont++;
    }
    while(!ans2.empty()){
        if(cont==k){
            break;
        }
        ansa[ans2.front().second] = ans2.front().first;
        ans2.pop();
        cont++;
    }
    for(int i =0;i<ansa.size();i++){
        if(ansa[i]==-1){
            continue;
        }
        cout<<ansa[i]<<"\n";
    }
    return 0;
}
