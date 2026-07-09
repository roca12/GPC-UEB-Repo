/*
 * Autor: Juan Martinez
 * Problema: Football (96A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/96/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int t1 = 0, t2 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0'){
            t2 = 0;
            t1++;
        } else {
            t2++;
            t1 = 0;
        }
        if(t1 == 7 || t2 == 7) break;
    }
    if(t1 == 7 || t2 == 7) printf("%s\n", "YES");
    else printf("%s\n", "NO");
    return 0;
}
