 /* Autor: Juan Martinez
 * Problema: Vasya the Hipster (581A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/581/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define vpii vector<pii>
#define add(x) push_back(x)


int main() {
	int n, m;
    cin>>n>>m;
    cout<<min(n,m)<<" "<<((abs(n-m) >= 2)? abs(n-m) / 2: 0)<<ln;
}
