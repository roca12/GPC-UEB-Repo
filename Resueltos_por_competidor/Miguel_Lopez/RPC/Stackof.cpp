/*
 * Autor: Miguel Lopez
 * Problema:  A Stack Of Gold
 * Juez online: RPC
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Kattis-astackofgold
 */

int main() {
    ll w,s; scanf("%lld %lld", &w,&s);
    ll c = (s*(s+1))/2;
    ll base = c * 29260;
    ll differe = w - base;
    printf("%lld\n", differe / 110);
    return 0;
}
