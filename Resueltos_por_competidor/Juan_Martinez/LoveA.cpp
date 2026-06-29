/*
 * Autor: Juan Martinez
 * Problema: Love "A" (1146A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1146/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define FOR(a) for(int i = 0; i < a; i++)
#define FORI(a)  for(int i = 0; i <= a; i++)
#define FOR2(a, b) for(int i = b; i < a; i++)
#define FORI2(a, b)  for(int i = b; i <= a; i++)

int main()
{
    int a = 0, dif;
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++) if(s[i] == 'a') a++;
    dif = s.size() - a;
    while(a <= dif) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != 'a') {
                s.erase(i,1);
                dif--;
                //cout<<s<<endl;
                break;
            }
        }
    }
    printf("%d\n", s.size());
    return 0;
}
