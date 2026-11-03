/*
 * Autor: Juan Martinez
 * Problema:  Fraction and Six (2278A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2278/A
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long int ll;

int main() {
	int t, a, b; cin>>t;
    string sa, sb;
    while(t--) {
        cin>>a>>b;
        cin>>sa>>sb;
        vector<int> l(26, 0);
        for(char c : sa) l[(c - 'a')]++;
        for(char c : sb) l[(c - 'a')]--;
        bool z = 1;
        for(int i = 0; i < 26; i++) {
            if(i == 8 || i == 18 || i == 23) {
                if(l[i] != 1) {
                    z = 0;
                    break;
                }
            } else {
                if(l[i] != 0) {
                    z = 0;
                    break;
                }
            }
        }
        if(z) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
