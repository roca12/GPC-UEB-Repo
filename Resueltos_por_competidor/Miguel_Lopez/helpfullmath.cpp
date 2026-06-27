/*
 * Autor: Miguel Lopez
 * Problema: Helpfull Maths
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/339/A
 */

#include <bits/stdc++.h>
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
    string a; cin >> a;
    vector<int> num;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != '+') {
            num.push_back(a[i] - '0');
        }
    }
    sort(num.begin(), num.end());
    int cont = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != '+') {
            a[i] = num[cont] + '0';
        }
        else {
            cont++;
        }
    }
    cout << a << endl;
    return 0;

 }



 
