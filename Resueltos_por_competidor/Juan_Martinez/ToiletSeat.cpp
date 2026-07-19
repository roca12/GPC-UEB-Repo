/*
 * Autor: EroMergeSort
 * Problema: Toilet Seat
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/toilet
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >>s;
    int a = 0, b = 0, c = 0;
    char temp = s[0];
    for(int i = 1; i < s.size(); i++){
        if(temp == 'D') {
            a++;
            temp = 'U';
        } else if(s[i] == 'D') a+= 2;
    }

    temp = s[0];
    for(int i = 1; i < s.size(); i++){
        if(temp == 'U') {
            b++;
            temp = 'D';
        } else if(s[i] == 'U') b+= 2;
    }

    temp = s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] != temp){
            c++;
            temp = s[i];
        }
     }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
