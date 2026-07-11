/*
 * Autor: Miguel Lopez
 * Problema:  Dungeon
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106225D
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    map<int,int> asd;
    while(t--) {
        int a; cin >> a;
        asd[a]++;
    }
    int cont = 0;
    for(auto [val, cant]: asd) {
        while(cant > val) {
            cant--;
            cont++;
        }
        if(cant < val) {
            cont+=cant;
        }
    }
    cout << cont << endl;
    return 0;
}
