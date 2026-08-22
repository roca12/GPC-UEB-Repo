/*
 * Autor: Miguel Lopez
 * Problema: IQ test
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/25/A
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    int t; cin >> t;
    vector<int> vec(t);
    int cont = 0, cont1 = 0;
    for(int i = 0; i < t; i++) {
        cin >> vec[i];
        //vec.push_back(c);
        if(vec[i] % 2 == 0) cont++;
        else {
            cont1++;
        }
      //  cout << vec[i] << " " << cont << " " << cont1 << " " << endl;
    }
    int maxi = -99999999;
    if(cont >= cont1) maxi = 1;
    else {
        maxi = 0;
    }
    //cout << maxi << endl;  
    for(int i = 0; i < (int) vec.size(); i++) {
        //cout << vec[i] << endl;
        if(vec[i] % 2 == maxi) {
            cout << i+1 << endl;
            break;
        }
    } 
}
