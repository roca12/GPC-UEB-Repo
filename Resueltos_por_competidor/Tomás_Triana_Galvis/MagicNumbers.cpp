#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
 * Autor: Tomás Triana Galvis
 * Problema: Magic Numbers
 * Juez online: UVA 471
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=412
 **/
bool verf(ll num){
    bool flag = true;
    ll a;
    map<ll, ll> ans;
    while(num!=0){
        a=num%10;
        num/=10;
        ans[a]++;

        if(ans[a]>1){

            flag =false;
            break;
        }
    }


    return flag;
}

int main(){
    ll t,n,s1,s2;
    cin>>t;
    while(t--){
        cin>>n;
        s1 = 0;
        s2=1;
        while(s1<=9999999999){
            s1 = n*s2;
            if(verf(s1)&& verf(s2)){
                cout<<s1<<" / "<<s2<<" = "<<n<<"\n";
            }
            s2++;
        }
        if(t>=1){
            cout<<"\n";
        }
    }

    return 0;
}
