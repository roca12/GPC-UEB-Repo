/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: 
* Juez: 
* Veredicto: Accepted
* URL: 
*/

#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
#define vvi vector<vi>
#define mpii map<int,int>
#define mpis map<int,string>
#define mpsi map<string,i>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define DBGARR(a, n) { cerr << #a << " = [ "; for (int i = 0; i < (n); i++) cerr << (a)[i] << " "; cerr << "]" << endl; }
typedef long long ll;
typedef double long dl;
using namespace std;

int main(){
    int n,p=0;
    cin>>n;
    for(int i = n,b; i>=0;i--){
        cin>>b;
        if(b) p |= (1 << i);
    }
    int cnt = 0;
    while(p!=1){
        cnt++;
        if((p>>0) & 1){
            int newP = (p<<1);
            newP ^= p;
            newP^=1;
        }else{
            p = (p>>1);
        }
    }
    cout<<cnt;
}