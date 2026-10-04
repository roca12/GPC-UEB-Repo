/*
 * Autor: Manuel Barros
 * Problema: Everything Everywhere
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2226/B
 */

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int prev;
        int temp;
        int sum = 0;
        cin >> prev;
        n--;
        while(n--){
            cin >> temp;
            int a = gcd(temp, prev);
            int m = (temp>prev)?temp/a:prev/a;
            int n = (temp<prev)?temp/a:prev/a;
            if(m-n == gcd(m, n)) sum++;
            prev = temp;
        }
        cout << sum << "\n";
    }
}
