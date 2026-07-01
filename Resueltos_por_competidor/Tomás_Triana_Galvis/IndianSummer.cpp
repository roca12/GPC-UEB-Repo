#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Indian Summer
 * Juez online: Codeforces44A
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/44/problem/A
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    set<pair<string,string>> s;
    string a,b;
    pair<string,string> temp;
    while(n--){
        cin>>a>>b;
        temp = make_pair(a,b);
        s.insert(temp);
    }
    cout<<s.size()<<"\n";
    return 0;
}
