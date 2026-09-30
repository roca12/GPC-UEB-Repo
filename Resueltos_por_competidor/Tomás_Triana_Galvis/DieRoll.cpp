#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Die Roll
 * Juez online: Codeforces 9A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/9/A
 **/

int main()
{
    int a,b,c;
    cin>>a>>b;
    c = max(a,b);
    int ans = 7-c;
    cout<<ans/__gcd(ans,6)<<"/"<<6/__gcd(ans,6)<<"\n";

    return 0;
}
