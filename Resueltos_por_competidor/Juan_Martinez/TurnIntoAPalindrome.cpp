/*
 * Autor: Juan Martinez
 * Problema: Turn Into a Palindrome (2267A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2267/problem/A
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
	int t, n, letras; cin>>t;
    char c;
    string s;
    while(t--) {
        letras = 0;
        cin>>n>>c;
        cin>>s;
        for(int i = 0; i < (n/2); i++) {
            if(s[i] != s[(n-1)-i]) {
                if(s[i] != c) letras++;
                if(s[(n-1)-i] != c) letras++;
            }
        }
        cout<<letras<<ln;
    }
}
