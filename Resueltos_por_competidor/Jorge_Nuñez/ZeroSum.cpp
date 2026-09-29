/*
 * Autor: Jorge Nuñez
 * Problema: Zero Sum
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2247/A
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
      int j;
      int one=0;
      cin>>j;
      vector<int>a(j);
      for(int i=0;i<j;i++){
        cin>>a[i];
      }

      for(int x : a){
        if(x==1){
            one++;

        }
      }

        if(j%2==1){
            cout<<"No"<<endl;
        }else if(one%2==j/2%2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
      }

    }



