/*
 * Autor: Juan Martinez
 * Problema: Lucky? (1676A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1676/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, sumA, sumB; cin>>t;
    string s;
    while(t--) {
        cin>>s;
        sumA = sumB = 0;
        for(int i= 0; i < 3; i++) sumA += s[i] - '0';
        for(int i= 3; i < 6; i++) sumB += s[i] - '0';
        if(sumA == sumB) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
