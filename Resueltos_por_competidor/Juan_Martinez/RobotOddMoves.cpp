/*
 * Autor: Juan Martinez
 * Problema:  Robot Odd Moves (2271A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2271/problem/A
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
int main() {
	int t; cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        if(x == y) cout<<x<<ln;
        else if((x < y) && abs(x-y) > 1) cout<<-1<<ln;
        else {
            if((x % 2) != (y % 2)) cout<<x+1<<ln;
            else cout<<x<<ln;
        }
    }
}
