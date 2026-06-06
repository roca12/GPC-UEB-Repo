#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Card Trick
 * Juez online: KattisCardTrick2
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/cardtrick2
 **/ 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> ans ={"1", "2 1", "3 1 2", "2 1 4 3", "3 1 4 5 2", "4 1 6 3 2 5", "5 1 3 4 2 6 7", "3 1 7 5 2 6 8 4", "7 1 8 6 2 9 4 5 3", "9 1 8 5 2 4 7 6 3 10",
     "5 1 6 4 2 10 11 7 3 8 9", "7 1 4 9 2 11 10 8 3 6 5 12", "4 1 13 11 2 10 6 7 3 5 12 9 8 "};
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n-1]<<endl;
    }

    return 0;
}


