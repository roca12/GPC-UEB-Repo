/*
 * Autor: Miguel Lopez
 * Problema: Scrolling Sign
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/H
 */
#include <bits/stdc++.h>
#include <cstdio>
#define ln "\n"
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll , ll>>
#define dbg(x) cerr << x << " <-----" << "DEBUG" << ln;
using namespace std;
typedef long long int ll;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int r,n; cin >> r >> n;
        vector<string> aux(n);
        for(string &s : aux) cin >> s;
        string s = "";
        int i = 1;
        int len = r;
        int cont = 0;
        s+=aux[0];
            while(true) {
                if(i == (int)aux.size() || cont > r) break;
                string flag1 = aux[i-1].substr(cont, aux[i-1].length() - cont);
                string flag2 = aux[i].substr(0, aux[i].length() - cont);
               // dbg(flag1); dbg(flag2); cerr << cont << " " << len << ln;
                //dbg(i);
                if(flag1 == flag2) {
                    s+=aux[i].substr(aux[i].length() - cont, cont);
                    i++;
                    cont = 0;
                }
                else {
                    cont++;
                    len--;
                }
            }
            cout << s.length() << ln;
            s = "";
    }
    return 0;
}

