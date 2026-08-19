/*
 * Autor: Juan Martinez
 * Problema: A+B Again? (1999A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1999/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int t; cin>>t;
    string s;
    while(t--){
        int sum = 0;
        cin>>s;
        for(char c : s) sum += c - '0';
        cout<<sum<<endl;
    }
    
}
