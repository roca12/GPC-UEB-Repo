/*
 * Autor: Juan Martinez
 * Problema: cAPS lOCK (131A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/131/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int lo = 0;
    bool b = false;
    for(int i = 0; i < s.size(); i++) {
        if(!isupper(s[0])) b = true;
        if(!isupper(s[i])) lo++;
    } 
    if(lo > 1) b = false;
    else if(lo == 0) b = true;
    if(!b) cout<<s<<endl;
    else {
        for(int i = 0; i < s.size(); i++) {
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
        cout<<s<<endl;
    }
}
