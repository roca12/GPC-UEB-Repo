/*
 * Autor: Miguel Lopez
 * Problema: Kefa and First Steps
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/580/problem/A
 */

#include <bits/stdc++.h>
//#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    int t; cin >> t;
    if(t == 1) {
        cout << 1 << endl;
        return 0;
    }
    int cont = 1;
    int maxi = 1;
    int arr[t+1];
    for(int i = 0; i < t ; i++) cin >> arr[i];
    for(int i = 0; i+1 < t; i++) {
        if(arr[i+1] >= arr[i]) {
           // cout << arr[i] << " " << arr[i+1] << endl;
            cont++;
            maxi = max(maxi,cont);
        }
        else {
            cont = 1;
        }
    }
    cout << maxi << endl;
}

// 2 2 1 3 4 1
