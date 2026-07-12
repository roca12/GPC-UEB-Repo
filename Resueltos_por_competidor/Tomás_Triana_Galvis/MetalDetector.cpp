#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Metal Detector
 * Juez online: Codeforcesgym101064F
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/101064/problem/F
 **/
ll solve(ll n, ll i){
    if(i%2!=0){
        return (i+1)/2;
    }else{
        if(n%2==0){
            return n/2 +solve(n/2,i/2);
        }else{
            if((i/2)-1 == 0){
                return (n+1)/2 + solve((n-1)/2,(n-1)/2);
            }else{
                return (n+1)/2 + solve((n-1)/2,(i/2)-1);
            }
        }

    }

}

int main()
{
    int t, n, i;
    cin>>t;
    while(t--){
        cin >>n;
        cin>>i;
        cout<<solve(n,i)<<"\n";
    }
    return 0;
}
