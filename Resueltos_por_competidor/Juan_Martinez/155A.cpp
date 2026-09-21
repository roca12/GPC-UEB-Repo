/*
 * Autor: Juan Martinez
 * Problema: I_love_%username% (155A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/155/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, act, mini, maxi, res = 0; cin>>t;
    for(int i = 0; i < t; i++) {
        cin>>act;
        if(i == 0) {
            mini = act;
            maxi = act;
        } else {
            if(act > maxi) {
                maxi = act;
                res++;
            } else if(act < mini) {
                res++;
                mini = act;
            }
        }
    }
    cout<<res<<"\n";
}
