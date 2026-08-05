/*
 * Autor: Juan Martinez
 * Problema: News Distribution (1167C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1167/C
 * Difficulty: 1400
 */
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> parent;
vector<int> tam;
vector<vector<int>> groups;

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
    int m, a, node;
    cin>>n>>m;
    parent.resize(n);
    tam.resize(n);
    groups.resize(m);
    for(int i = 0; i < n; i++) make_set(i);  

    for(int i = 0; i < m; i++) {
        cin>>a;
        for(int j = 0; j < a; j++) {
            cin>>node;
            node--;
            if(groups[i].size() > 0) union_set(groups[i][0],node);
            groups[i].push_back(node);
        }
    }
    
    for(int i = 0; i < n; i++) {
        a = find_set(i);
        cout<<tam[a]<<" ";
    }

    return 0;
}
