/*
 * Autor: Juan Martinez
 * Problema: Jzzhu and Children (450A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/450/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, temp;
    cin>>n>>m;
    queue<pair<int,int>> que;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        que.push({temp, i+1});
    }
    pair<int,int> act;
    while(!que.empty()) {
        act = que.front();
        que.pop();
        act.first -= m;
        if(act.first > 0) que.push({act.first, act.second});
    }
    cout<<act.second<<endl;
}

