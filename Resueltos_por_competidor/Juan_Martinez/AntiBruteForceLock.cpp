/*
 * Autor: Juan Martinez
 * Problema: Anti Brute Force Lock
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/B
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)
const int INF = 1e9;

vector<string> llaves;
vvi adj;

int n;

struct Edge {
    int w = INF, to = -1;
};

int prim() {
    int total_weight = 0;
    vector<bool> selected(n, false);
    vector<Edge> min_e(n);
    min_e[0].w = 0;

    for (int i=0; i<n; ++i) {
        int v = -1;
        for (int j = 0; j < n; ++j) {
            if (!selected[j] && (v == -1 || min_e[j].w < min_e[v].w))
                v = j;
        }

        if (min_e[v].w == INF) {
            cout << "No MST!" << endl;
            exit(0);
        }

        selected[v] = true;
        total_weight += min_e[v].w;

        for (int to = 0; to < n; ++to) {
            if (adj[v][to] < min_e[to].w)
                min_e[to].w = adj[v][to];
                min_e[to].to = v;
        }
    }

    return total_weight;
}

int main() {
    int t, res, tempA;
    cin>>t;
    string aux;
    while(t--) {
        cin>>n;
        adj.resize(n, vi(n, INF));
        for(int i = 0; i < n; i++) {
            cin>>aux;
            llaves.add(aux);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int temp = 0;
                for(int z = 0; z < 4; z++) {
                    int dif = abs((llaves[i][z] - '0') - (llaves[j][z] - '0'));
                    temp += min(dif, 10 - dif);
                }
                adj[i][j] = temp;
            }
        }
        res = prim();
        tempA = INF;
        llaves.add("0000");
        for(int i = 0; i < n; i++) {
            int dif;
            int temp = 0;
            for(int z = 0; z < 4; z++){
                dif = abs((llaves[(n)][z] - '0') - (llaves[i][z] - '0'));
                temp += min(dif, 10 - dif);
            }
            tempA = min(tempA, temp);
        }
        cout<<(res+tempA)<<ln;
        llaves.clear();
        adj.clear();
    }
}
