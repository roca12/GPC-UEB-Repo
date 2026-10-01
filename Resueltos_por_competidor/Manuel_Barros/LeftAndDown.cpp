/*
 * Autor: Manuel Barros
 * Problema: Left and down
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2125/B
 */

#include <iostream>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for(int i = 0; i<t; i++) {
        ll a, b, k;
        cin >> a >> b >> k;
        ll maxi, mini;
        if(a >= b)
        {
            maxi = a;
            mini = b;
        }
        else
        {
            maxi = b;
            mini = a;
        }
        ll div = gcd(maxi, mini);
        if(a/div <= k && b/div <= k)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}
