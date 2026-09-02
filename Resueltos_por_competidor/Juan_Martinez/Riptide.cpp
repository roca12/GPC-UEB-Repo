/*
 * Autor: Juan Martinez
 * Problema: Riptide (2254A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2254/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, con; cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        con = 0;
        while(a != b && a != c && b!= c) {
            if(a > b && a > c) {
                if(b < c) b++;
                else c++;
                a--;
            } else if (b > a && b > c){
                if(a < c) a++;
                else c++;
                b--;
            } else {
                if(b < a) b++;
                else a++;
                c--;
            }
            con++;
        }
        cout<<con<<"\n";
    }
}
