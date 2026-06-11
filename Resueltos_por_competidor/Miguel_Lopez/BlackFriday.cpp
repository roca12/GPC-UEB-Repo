/*
 * Autor: Miguel Lopez
 * Problema:  Black Friday
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/822071#problem/E
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t; scanf("%d", &t);
    vector<int> cant;
    for(int i = 0; i < t ; i++) {
        int n; scanf ("%d", &n);
        cant.push_back(n);
    }

    map<int, int> extra;
    for(auto a: cant) {
        extra[a]++;
    }
    int maxi = 0;
    for(auto [valor,cant] : extra) {
        if(cant == 1) {
            maxi = max(maxi, valor);
        }
    }
    bool apro = false;
    int cont = 1;
    for(auto a : cant) {
        if(maxi == a) {
            printf("%d", cont);
            apro = true;
        }
        cont++;
    }
    if(!apro) {
        printf("%s", "none");
    }

    return 0;
}
