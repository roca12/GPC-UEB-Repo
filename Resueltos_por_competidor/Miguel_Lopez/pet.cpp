/*
 * Autor: Miguel Lopez
 * Problema: A - Pet
 * Juez online: Kattis
 * Veredicto: Accepted 
 * URL: https://vjudge.net/contest/822071#problem/A
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int e[5];
    int maxi = 0;
    int f;
    for(int i = 0; i < 5; i++) {
        int a,b,c,d; cin >> a >> b >> c >> d;
        e[i] = a+b+c+d;
        if(e[i] > maxi) {
            maxi = e[i];
            f = i+1;
        }
    }
    cout << f <<  " " << maxi << endl;
        return 0;
}
