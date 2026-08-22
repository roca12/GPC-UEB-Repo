/*
 * Autor: Miguel Lopez
 * Problema: Expresion
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/479/problem/A
 */
 
#include <bits/stdc++.h>
//#include <cctype>
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
    init_code();
    int a,b,c; cin >> a >> b >> c;
    int aux1 = a+b*c;
    int aux2 = a*(b+c);
    int aux3 = a*b*c;
    int aux4 = (a+b)*c;
    int aux5 = a+b+c;
    int maxi = max(aux5,max(max(aux1,aux2),max(aux3,aux4)));
    cout << maxi << endl;
}
