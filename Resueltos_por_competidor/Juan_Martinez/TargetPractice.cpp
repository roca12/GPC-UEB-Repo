/*
 * Autor: Juan Martinez
 * Problema: Target Practice (1873C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1873/C
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                       {1,2,2,2,2,2,2,2,2,1},
                       {1,2,3,3,3,3,3,3,2,1},
                       {1,2,3,4,4,4,4,3,2,1},
                       {1,2,3,4,5,5,4,3,2,1},
                       {1,2,3,4,5,5,4,3,2,1},
                       {1,2,3,4,4,4,4,3,2,1},
                       {1,2,3,3,3,3,3,3,2,1},
                       {1,2,2,2,2,2,2,2,2,1},
                       {1,1,1,1,1,1,1,1,1,1}};
    int t; cin>>t;
    while(t--) {
        string s;
        int res = 0;
        for(int i = 0; i < 10; i++) {
            cin>>s;
            for(int j = 0; j < 10; j++) {
                if(s[j] == 'X') res += arr[i][j];
            }
        }
        cout<<res<<endl;
    }
}
