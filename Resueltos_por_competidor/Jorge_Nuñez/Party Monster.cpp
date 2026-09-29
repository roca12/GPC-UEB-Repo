/*
 * Autor: Jorge Nuñez
 * Problema: Party Monster
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2227/B
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

    int c ;
    cin>>c;
    while(c--){
        int n;
        int a=0;
        int b=0;

        cin>>n;
        for(int i=0;i<n;i++){
            char j;
            
            cin>>j;
            if(j=='('){
                a++;

            }else{
                b++;
            }
        }
        if(a==b){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }



}