/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Letter Balloons
 * Juez online: RPC
 * Veredicto: Accepted
 * URL:
 */
#include<bits/stdc++.h>
#define vb vector<bool>
using namespace std;
int main(){
    int p,t,cnt=0;
    cin>>p>>t;
    vector<int> masks;
    while(t--){
        string s;
        cin>>s;
        bool repeated = false;
        vb used(26, false);
        int last = 0;
        for(char &c:s){
            if(used[c-'A'])repeated = true;
            else used[c-'A'] = true;
            last = max(last,c-'A');
        }
        bool invalid = (
            (int)s.size()>p ||
            repeated ||
            last>=p             
        );
        if(invalid) continue;
        int mask=0;
        for(char &c:s) mask |= (1<<(c-'A'));
        masks.push_back(mask);
    }
    int n=masks.size();
    for(int S=0; S<(1<<n); S++){
        int comb=0, c=0;
        bool logro=true;
        for(int i=0;i<n;i++) if(S>>i&1){
            if(comb & masks[i]){ 
                logro=false;
                break;
            } 
            comb|=masks[i]; c++;
        }
        if(logro) cnt=max(cnt,c);
    }
    cout<<cnt<<"\n";
}