/*
 * Autor: Jorge Nuñez, Juan Garcia
 * Problema: Destroying Bridges
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1944/A
 */

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

const ll MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int c;
    cin>>c;

    while(c--){

        int a,b;
        cin>>a>>b;
        int p = (a*(a-1))/2;
        if(b==0){
            cout<<a<<endl;
        }else{
            if(b>=p){
                cout<<1<<endl;
            }
            else if(b>=a-1){
                cout<<1<<endl;
            }else{
                cout<<a<<endl;

            }
        }

    }


}