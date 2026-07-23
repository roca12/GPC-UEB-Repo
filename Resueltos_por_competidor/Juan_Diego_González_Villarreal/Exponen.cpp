/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: 
* Juez: 
* Veredicto: Accepted
* URL: 
*/

#include<bits/stdc++.h>
typedef long long ll;
typedef double long dll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
#define vvi vector<vi>
#define mpii map<int,int>
#define um unordered_map
#define mpis map<int,string>
#define mpsi map<string,int>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define DBGARR(a, n) { cerr << #a << " = [ "; for (int i = 0; i < (n); i++) cerr << (a)[i] << " "; cerr << "]" << endl; }
#define vll vector<ll>
#define ln "\n"
using namespace std;

ll MOD = 10e9+7;

ll modMul(ll a, ll b){
    return ((a%MOD)*(b%MOD))%MOD;
}

ll expo(ll a, ll b){
    ll tmp;

    if(b == 0) return 1;
    if(b%2==0){
        tmp = expo(a%MOD,b/2)%MOD;
        return modMul(tmp,tmp);
    }
    else{
        tmp = expo(a%MOD,(b-1)/2)%MOD;
        return modMul(modMul(a,tmp),tmp);
    }
}

int main(){
    ll n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<expo(a%MOD,b)%MOD<<ln;
    }

}