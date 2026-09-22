/*
 * Autor: Juan Martinez
 * Problema: Three Piles (2266B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2266/problem/B
 */
#include <bits/stdc++.h>
using namespace std;

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
	int t, a, b, c; 
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if(a >= b) {
            cout<<(abs((a+c)-b))<<ln;
        } else {
            if((abs((a+c)-b)) > (abs(a-b))) cout<<(abs((a+c)-b))<<ln;
            else cout<<abs(a-b)<<ln;
        }
    }
}
