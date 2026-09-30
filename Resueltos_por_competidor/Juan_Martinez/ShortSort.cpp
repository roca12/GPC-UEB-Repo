/*
 * Autor: Juan Martinez
 * Problema: Short Sort (1873A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1873/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)
const int INF = 1e9;

int main() {
    int t; cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int temp = 0;
        if(s[0] != 'a') temp++;
        if(s[1] != 'b') temp++;
        if(s[2] != 'c') temp++;
        if(temp == 3) cout<<"NO"<<ln;
        else cout<<"YES"<<ln;
    }
	
}
