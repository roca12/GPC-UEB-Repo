/*
 * Autor: Juan Martinez
 * Problema: Numbers on the Board (2283A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2283/problem/A
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define add(x) push_back(x)
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define vi vector<int>

int main() {
	int t; 
    cin>>t;
    while(t--) {
        int l, r;
        cin>>l>>r;
        if(l == 0 && r == 0) cout<<0<<ln;
        else if(abs(l) == abs(r)) cout<<0<<ln;
        else if((l > 0) && (r > 0)) cout<<abs(abs(l)-abs(r))<<ln;
        else if((l < 0) && (r < 0)) cout<<abs(abs(l)-abs(r))<<ln;
        else cout<<abs(abs(l)-r)-1<<ln;
    }
}
