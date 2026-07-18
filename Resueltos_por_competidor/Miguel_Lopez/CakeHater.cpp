/*
 * Autor: Miguel Lopez
 * Problema: Cake Hater
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106039K
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    set<int> test;
    int pos = -1;
    //int maxi = 0;
    int a,b; cin >> a >> b;
    for(int i = 0; i < b; i++) {
        int n; cin >> n;
        //cout << n << " ";
         test.insert(n);
    }
    for(int i = 0; i < t; i++) {
        int z; cin >> z;
        int cont = 0;
        for(int j = 0; j < z; j++) {
            int n; cin >> n;
            if(test.count(n)) {
                cont++;
            }
        }
        if(cont > z/3) {
            pos = i+1;
            break;
        }
    }
    cout << pos << endl;

    return 0;
}
