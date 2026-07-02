/*
 * Autor: Juan Martinez
 * Problema: Keyboard (474A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/474/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char keys[30] = {'q','w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
    'a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char c;
    scanf("%c", &c);
    string s;
    cin>>s;
    stringstream ss;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < 30; j++){
            if(s[i] == keys[j]) {
                if(c == 'R') ss<<keys[j-1];
                else ss<<keys[j+1];
            }
        }
    }
    cout<<ss.str()<<endl;
    return 0;
}
