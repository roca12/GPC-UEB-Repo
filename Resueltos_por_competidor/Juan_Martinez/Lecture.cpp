/*
 * Autor: Juan Martinez
 * Problema: Lecture (499B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/499/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string, string> dicc;
    string s1, s2;
    int n, m; 
    cin>>n>>m;
    for(int i = 0; i < m; i++) {
        cin>>s1>>s2;
        dicc[s1] = s2;
        dicc[s2] = s1;
    }
    for(int i = 0; i < n; i++){
        cin>>s1;
        if(s1.size() <= dicc[s1].size()) cout<<s1;
        else cout<<dicc[s1];
        if(i != (n-1)) cout<<" ";
    }

}
