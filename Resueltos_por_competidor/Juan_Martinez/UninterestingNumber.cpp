/*
 * Autor: Juan Martinez
 * Problema: Uninteresting Number (2050C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2050/C
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"

int main() {
    int t, a, b, suma; cin>>t;
    string s;
    while(t--) {
        cin>>s;
        a = 0, b = 0, suma = 0;
        for(int i = 0; i < (int)s.size(); i++) {
            if(s[i] == '2' && a < 8) a++;
            if(s[i] == '3' && b < 8) b++;
            suma += s[i] - '0'; 
        }
        bool ba = 0;
        //cout<<a<<" "<<b<<ln;
        for(int i = 0; i <= a && !ba; i++) {
            for(int j = 0; j <= b && !ba; j++) {
                //cout<<(suma + (i*2) + (j*6))<<ln;
                if(((suma + (i*2) + (j*6)) % 9) == 0){
                    cout<<"YES"<<ln;
                    ba = 1;
                }
            }
        } 
        if(!ba) cout<<"NO"<<ln;
        //cout<<ln;
    }
}
