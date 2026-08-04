/*
 * Autor: Juan Martinez
 * Problema: YES or YES? (1703A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1703/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    while(n--) {
        string s;
        cin>>s;
        for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
