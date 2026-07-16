/*
 * Autor: Juan Martinez
 * Problema: Interesting drink (706B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/706/B
 * Difficulty: 1100
 */
#include <bits/stdc++.h>

using namespace std;

vector<int> tien;

int binarySearch(int n){
    int l = 0, r = tien.size()-1, m;
    int j = -1;
    while(l <= r){
        m = l +(r-l) / 2;
        if(n >= tien[m]){
            j = m;
            l = m+1;
        } else {
            r = m-1;
        }
       // cout<<tien[m]<<endl;
    }
    if(j == -1) j = 0;
    else j++;
    return j;
}

int main(){
    int n, z; cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>z;
        tien.push_back(z);
    }
    sort(tien.begin(), tien.end());

    cin>>z;
    for(int i = 0; i < z; i++){
        cin>>n;
        cout<<binarySearch(n)<<endl;
    }
    return 0;
}
