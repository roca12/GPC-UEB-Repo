#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Canvas Painting
 * Juez online: UVA13017
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4905
 **/

int main(){
    ll t,n,a,x,y;
    cin>>t;
    while(t--){
        priority_queue<ll, vector<ll>,greater<ll>> ans;
        cin>>n;
        while(n--){
            cin>>a;
            ans.push(a);
        }
        ll ansa=0;
        while(ans.size()>1){
            x=ans.top();
            ans.pop();
            y =ans.top();
            ans.pop();
            ansa+=(x+y);
            ans.push(x+y);
        }
        cout<<ansa<<"\n";
        while(!ans.empty()){
            ans.pop();
        }
    }
    return 0;
}
