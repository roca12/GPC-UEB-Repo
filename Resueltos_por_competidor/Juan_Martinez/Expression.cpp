/*
 * Autor: Juan Martinez
 * Problema: Expression (479A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/479/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b , c;
    cin>>a>>b>>c;
    cout<<max(max(a+b*c, max(a*b+c, a+b+c)),max(a*b*c, max((a+b)*c, a*(b+c))))<<endl;
}
