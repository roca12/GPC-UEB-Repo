/*
 * Autor: Juan Martinez
 * Problema:ICPC Balloons (1703B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1703/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
int main() {
	
    int t, res;
    string ss;
    cin>>t;
    while(t--) {
        cin>>res;
        res = 0;
        set<char> s;
        cin>>ss;
        for(char c: ss) {
            if(s.count(c)) {
                res++;
            }else {
                res += 2;
                s.insert(c);
            }
        }
        cout<<res<<ln;
    }
}
