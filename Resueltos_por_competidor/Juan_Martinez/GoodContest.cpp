/*
 * Autor: Juan Martinez
 * Problema: Good Contest (2266A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2266/problem/A
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
	int t, n; 
    cin>>t;
    while(t--) {
        int arr[3];
        cin>>n;
        int mini = INF, maxi = 0;
        for(int i = 0; i < 3; i++) {
            cin>>arr[i];
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
        cout<<(n-maxi) + (maxi-mini)<<ln;
    }
}
