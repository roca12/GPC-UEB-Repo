/*
 * Autor: Juan Martinez
 * Problema: Chat room (58A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/58/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
    stack<char> hello;
    hello.push('o');
    hello.push('l');
    hello.push('l');
    hello.push('e');
    hello.push('h' );
    for(int i = 0; i < s.size(); i++) {
        if(!hello.empty() &&s[i] == hello.top()) hello.pop();
    }
    if(hello.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
