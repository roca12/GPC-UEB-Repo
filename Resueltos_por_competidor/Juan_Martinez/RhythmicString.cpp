/*
 * Autor: Juan Martinez
 * Problema: Rhythmic String (2283B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2283/problem/B
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
        int n; cin>>n;
        vi arr(n);
        map<int, int> mult;
        for(int &a : arr) cin>>a;
        sort(all(arr));
        for(int i = 0; i < (n-1); i++) {
            if(mult[arr[i]] > 0) continue;
            for(int j = i+1; j < n; j++) {
                    if(arr[j] % arr[i] == 0) mult[arr[i]]++;
            }
        }
        int maximo = 0;
        for(auto [val,cant] : mult) {
            maximo = max(maximo, cant);
        }
        cout<<(n-(maximo+1))<<ln;
    }
}
