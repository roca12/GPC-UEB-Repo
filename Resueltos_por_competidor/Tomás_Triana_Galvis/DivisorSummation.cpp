#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: DivisorSummation
 * Juez online: SPOJDIVSUM
 * Veredicto: Accepted
 * Url: https://www.spoj.com/submit/DIVSUM/
 **/ 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    vector<int> ans(500001);
    for(int i = 1;i<=500000;i++){
        for(int j = i; j<=500000;j+=i){
            ans[j]+=i;
        }
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]-n<<endl;
    }
    return 0;
}




