/*
 * Autor: Juan Martinez
 * Problema: Move and Turn (1459B)
 * Juez online: Codeforces
 * Veredicto: Memory limit exceeded
 * Url: https://codeforces.com/problemset/problem/1459/B
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

set<pair<int, int>> pos;

queue<pair<pair<int,int>, bool>> lista;

void bfs(int n) {
    int direccion = 1;
    lista.push({{500,499}, true});
    lista.push({{500,501}, true});
    lista.push({{501,500}, false});
    lista.push({{499,500}, false});
    lista.push({{-1, -1}, false});
    while(!lista.empty() && direccion <= n){
        auto i = lista.front();
        lista.pop(); 
        if(i.first.first != -1){
            if(direccion == n) {
                //cout<<lista.size()<<endl;
                //cout<<i.first.first<<" "<<i.first.second<<endl;
                pos.insert({i.first.first, i.first.second});
            } else {
                //cout<<i.first.first<<" "<<i.first.second<<endl;
                 if(i.second ==  true) {
                    //izq
                    if((i.first.first-1) >= 0) lista.push({{(i.first.first-1),i.first.second}, false});
                    //der
                    if((i.first.first+1) <= 1000) lista.push({{(i.first.first+1),i.first.second}, false});

                 } else {
                    //arriba
                    if((i.first.second-1) >= 0) lista.push({{i.first.first,(i.first.second-1)}, true});
                    //abajo
                    if((i.first.second-1) <= 1000) lista.push({{i.first.first,(i.first.second+1)}, true});
                 }   
            }
        
        } else {
            lista.push({{-1, -1}, false});
            direccion++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    if(n == 1) cout<<4<<endl;
    else {
        bfs(n);
        cout<<pos.size()<<endl;
        //for(auto i : pos) cout<<i.first<<" "<<i.second<<endl;
    }
}
