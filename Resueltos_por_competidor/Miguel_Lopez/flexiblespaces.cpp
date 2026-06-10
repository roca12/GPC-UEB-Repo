/*
 * Autor: Miguel Lopez
 * Problema: Flexible Spaces 
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/822063#problem/A
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int w,p;
    vector<int> a;
    a.push_back(0);
    scanf("%d %d", &w,&p);
    for(int i = 0; i < p; i++) {
        int n; scanf("%d", &n);
        a.push_back(n);
    }
    a.push_back(w);
    set<int> b;
    for(int i = 0; i < a.size(); i++) {
        for(int j = i+1; j < a.size(); j++) {
            b.insert(a[j] - a[i]);
        }
    }
    for(auto c : b ) {
        printf("%d" " ", c);
    }
    return 0;
    }

