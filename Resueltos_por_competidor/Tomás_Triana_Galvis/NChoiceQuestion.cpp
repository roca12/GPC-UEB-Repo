#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: N-Choice Question
 * Juez online: AtCoder abc300_a
 * Veredicto: Accepted
 * Url: https://atcoder.jp/contests/abc300/tasks/abc300_a
 **/ 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    int ans = a+b;
    int temp;
    for(int i=1;i<=n;i++){
        cin>>temp;
        if(temp == ans){
            cout<<i<<endl;
        }
    }

    return 0;
}


