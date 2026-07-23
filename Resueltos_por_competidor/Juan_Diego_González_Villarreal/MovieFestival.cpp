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

int main(){
    int n;
    cin>>n;
    vector<pii> v(n);
    for(pii &p: v)cin>>p.first>>p.second;
    auto cmp = [](const pii &x,  const pii &y){
        if(x.second == y.second){
            return x.first < y.first;
        }
        return x.second<y.second;
    };
    sort(v.begin(), v.end(), cmp);
    int cnt = 0, last = 0;
    for(pii mv: v){
        if(mv.first>=last){
            cnt++;
            last=mv.second;
        }
    }
    cout<<cnt;
}