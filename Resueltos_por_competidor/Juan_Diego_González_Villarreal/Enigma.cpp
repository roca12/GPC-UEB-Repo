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
#define vb vector<bool>
#define ln "\n" 
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int pos = 0, cnt=0;
    for(int i = 0;i<s1.size()-s2.size()+1;i++){
        bool flag = true;
        for(int j = 0; j<s2.size();j++){
            if(s2[j]==s1[i+j]){
                flag = false;
                break;
            }
        }
        if(flag) cnt++;
    }
    cout<<cnt;
}