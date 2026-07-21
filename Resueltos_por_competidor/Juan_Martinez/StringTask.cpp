/*
 * Autor: Juan Martinez
 * Problema: String Tasks (118A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/118/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	string s; cin >> s;
    queue<char> words;
    for(int i = 0; i < s.size(); i++) {
        s[i]  = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i') words.push(s[i]);
    }
    stringstream ss;
    while(!words.empty()){
        ss<<'.';
        ss<<words.front();
        words.pop();
    }
    cout<<ss.str()<<endl;
}
