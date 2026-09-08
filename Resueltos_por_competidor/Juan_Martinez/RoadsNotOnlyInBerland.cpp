/*
 * Autor: Juan Martinez
 * Problema: Roads not only in Berland (25D)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/25/problem/D
 * Difficulty: 1900
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"

vector<int> parent, sizE;

void make_set(int v) {
    parent[v] = v;
    sizE[v] = 1;
}

int find_set(int v) {
    if(v == parent[v]) return v;
    else return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if(a != b) {
        if(sizE[a] < sizE[b]) swap(a,b);
        parent[b] = a;
        sizE[a] += sizE[b];
    }
}

int main() {
    int n, a, b, aux1, aux2; cin>>n;
    parent.resize(n+1);
    sizE.resize(n+1);
    queue<pair<int, int>> q;
    for(int i = 1; i <= n; i++) make_set(i);
    for(int i = 1; i < n; i++) {
        cin>>a>>b;
        aux1 = find_set(a);
        aux2 = find_set(b);
        if(aux1 == aux2) q.push({min(a,b), max(a,b)});
        union_sets(a,b);
    }
    cout<<q.size()<<ln;
    pair<int,int> act;
    for(int i = 1; i <= n; i++) {
        if(i > 1) {
            if(find_set(i) != find_set(i-1)) {
                act = q.front();
                q.pop();
                cout<<act.first<<" "<<act.second<<" "<<i-1<<" "<<i<<ln;
                union_sets(i-1, i);
            }
        }
    }
}
