/*
 * Autor: Juan Martinez
 * Problema: Building Roads
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1666/
 */
#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> tam;

void make_set(int node) {
    parent[node] = node;
    tam[node] = 1;
}

int find_set(int node) {
    if(parent[node] == node) return node;
    else return parent[node] = find_set(parent[node]);
}

void union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if(a != b) {
        if(tam[a] > tam[b]) swap(a,b);
        parent[b] = a;
        tam[a] += tam[b];
    }
} 

int main(){
    int n, m, a, b;
    cin>>n>>m;
    parent.resize(n);
    tam.resize(n);
    for(int i = 0; i < n; i++) make_set(i);  

    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        a--;
        b--;
        union_set(a,b);
    }
    
    set<int> parents;
    for(int i = 0; i < n; i++){
        parents.insert(find_set(i)+1);
        //cout<<find_set(i)+1<<" ";
    }
    //cout<<endl;
    int temp;
    cout<<parents.size()-1<<endl;
    if(parents.size()-1 > 0) {
        for(int i : parents) {
            temp = i;
            break;
        }
        for(int i : parents) {
            if(i != temp) {
                cout<<temp<<" "<<i<<endl;
            }
        }
    }
    return 0;
}
