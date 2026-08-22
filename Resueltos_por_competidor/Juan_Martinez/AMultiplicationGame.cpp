/*
 * Autor: Juan Martinez
 * Problema: A Multiplication Game
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/841803#problem/D
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	vector<pair<ll,bool>> arr;
    ll i = 1;
    bool b = 1;
    while(i < 4294967295) {
        if(b) i *= 9;
        else i *= 2;
        arr.push_back({i,b});
        //cout<<i<<" "<<b<<endl;
        b = !b;
    }
    ll n;
    while(cin>>n) {
        b = 0;
        for(auto p: arr){
            if(n <= p.first) {
                b = p.second;
                break;
            }
        }
        if(b) cout<<"Stan wins."<<endl;
        else cout<<"Ollie wins."<<endl;
    }
    return 0;
}
