/*
 * Autor: Miguel Lopez
 * Problema: The judges problem
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106068I
 */
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <ios>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	map<int,int> freq;
    int t = 10;
    int num = 0;
    int maxi = 0;
    while(t--) {
        int n; cin >> n;
        freq[n]++;
    }
    for(auto i: freq) {
        if(i.second >= maxi) {
        maxi = max(maxi, i.second);
        num = i.first;
        }
    }
    cout << num << endl;
}
