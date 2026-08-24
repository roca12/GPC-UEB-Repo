/*
 * Autor: Miguel Lopez
 * Problema: Lottery
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Kattis-dishonestlottery
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    //init_code();
    int t; cin >> t;
    map<int,int> freq;
    for(int i = 0; i < 10*t; i++) {
        for(int j = 0; j < 5; j++) {
            int n; cin >> n;
            freq[n]++;
        }
    }
    vector<int> aux;
    for(auto i : freq) {
        double porc = (double) i.second / (t*10) * 100;
        if(porc > 20.0) aux.push_back(i.first);
    }
    if(aux.size() == 0) {
    cout << -1 << endl;
    } 
    else {
    for(int i = 0; i < (int)aux.size(); i++) {
        cout << aux[i];
        if(i + 1 < (int) aux.size()) cout << " ";
    }
    cout << endl;
    }
}
