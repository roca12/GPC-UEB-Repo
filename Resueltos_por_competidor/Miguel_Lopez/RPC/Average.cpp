/*
 * Autor: Miguel Lopez
 * Problema:  Black Friday
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/QOJ-9755
 */

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd(ll a, ll b) {
    if(a == 0) {
        return b;
    }
    return gcd(b%a , a);
}
int main()
{
   string s; cin >> s;
   ll lon = s.size();
   ll tota = (lon*(lon+1))/2;
   ll cont = 0;
   for(int i = 1; i <= 9 ; i++) {
    ll a = 0, b = 0;
    for(int j = 0; j < lon; j++) {
        if(s[j] - '0' < i) {
            a+= ++b;
        }
        else {
            b = 0;
        }
    }
    cont+=tota-a;
   }
   ll res = gcd(cont, tota);
   ll c = cont/res;
   ll d = tota/res;
   if(d == 1) {
    printf("%lld\n", c);
   }
   else if(c < d) {
    printf("%lld/%lld\n", c,d);
   }
   else {
    printf("%lld %lld/%lld\n", c/d, c%d, d);
   }
    return 0;
}
