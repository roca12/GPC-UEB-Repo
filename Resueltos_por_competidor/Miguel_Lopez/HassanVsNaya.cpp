/*
 * Autor: Miguel Lopez
 * Problema: Hassan VS Naya
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106068K
 */
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    vector<int> arr;
    int maxi = 0, maxi1 = 0;
    bool naya = false, hassan = false; //naya si es 1 al final y si no es 1 al final entonces hassan
    for(int i = 0; i < t; i++) {
        int n; cin >> n;
        arr.push_back(n);
        maxi = max(maxi, maxi1);
    }
    sort(arr.begin(), arr.end());
    while((int)arr.size() != 1) {
        if((int)arr.size() == 2) {
            int res = __gcd(arr[0], arr[1]);
           // cout << arr[0] << " " << arr[1] << endl;
            if(res == 1) {
                naya = true;
                break;
            }
            else {
                hassan = true;
                break;
            }
        }
        else {
            int res = __gcd(arr[arr.size()-1], arr[arr.size()-2]);
            arr.pop_back();
            arr.pop_back();
            arr.push_back(res);
        }
    }
    if(hassan) cout << "Hassan" << endl;
    else cout << "Naya" << endl;
}
// pene
