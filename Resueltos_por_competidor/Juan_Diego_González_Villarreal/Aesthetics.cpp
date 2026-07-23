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
    int n;
    cin>>n;
    vi l(n);
    for(int &li:l)cin>>li;
    bool found = false;
    for(int k = 2; k<=n;k++){
        if(n%k!=0) continue;
        int trgt = n/k;
        mpii m;
        for(int &x:l){
            if(m.find(x%k)==m.end()){
                m.insert(mp(x%k,1));
            }else m[x%k]++;
        }
        bool flag = true;
        int i = 0;
        for(auto &[idx,freq]: m){
            if(freq!=trgt || idx!=i){
                flag = false;
                break;
            }
            i++;
        }
        if(flag){
            cout<<k;
            return 0;
        } 
    }
    if(!found)cout<<-1;
    return 0;
}