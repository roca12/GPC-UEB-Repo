/*
 * Autor: Juan Martinez
 * Problema: Grapevine (CCPL 2026 R9-G)
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/847427#problem/G
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"

vector<vector<int>> arr;

int binarySearch(int n, int z, int i) {
    int l = 0, r = arr[i].size()-1, m, j = -1;
    while(l <= r) {
        m = (l+r)/2;
        if(n <= arr[i][m]) {
            if(arr[i][m] <= z) j = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return j;
}

int main() {
    int n, m, q, l, r, maximo, temp;
    while(cin>>n>>m) {
        if(n == 0 && m == 0) break;
        arr.resize(n, vector<int>(m));
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cin>>arr[i][j];
                }
            }
            cin>>q;
            for(int z = 0; z < q; z++) {
                cin>>l>>r;
                maximo = 0;
                for(int i = 0; i < n; i++) {
                    int j = binarySearch(l,r,i);
                    //cout<<"  "<<j<<ln;
                    if(j == -1) continue;    
                    temp = 1;
                    while(i+temp < n && j+temp < m) {
                        //cout<<arr[i+temp][j+temp]<<" ";
                        if(arr[i+temp][j+temp] <= r) temp++;
                        else break;
                    }    
                    //cout<<ln;
                    maximo = max(maximo, temp);           
                }
            cout<<maximo<<ln;
            }
        cout<<"-"<<ln;
        arr.clear();
    }
}
