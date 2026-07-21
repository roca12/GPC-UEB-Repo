/*
 * Autor: Juan Martinez
 * Problema: Lucky Division (122A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/122/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    set<char> digits;
    digits.insert('4');
    digits.insert('7');
	  for(int i = 4; i < 1001; i++){
        string s = to_string(i);
        bool b = true;
        for(char c : s) {
            if(digits.count(c) == 0) b = false;
        }
        if(b) cout<<i<<", ";
    }
    */
    
    int lucky[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n; cin>>n;
    bool div = false;
    for(int i = 0; i < 14; i++){
        if((n % lucky[i]) == 0) div = true;
    }
    if(div) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
