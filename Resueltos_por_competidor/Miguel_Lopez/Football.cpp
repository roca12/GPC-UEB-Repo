// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    map<string,int> eq;
    while(t--) {
        string s; cin >> s;
        eq[s]++;
    }
    int cont = 0;
    string res = "";
    for(auto[equi, val]: eq){
        if(val > cont) {
            cont = val;
            res = equi;
        }
    }
    cout << res << endl;
}

