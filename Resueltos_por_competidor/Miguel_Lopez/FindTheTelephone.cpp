/*
 * Autor: Miguel Lopez
 * Problema: Find The Telephone
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1862&mosmsg=Submission+received+with+ID+31299456
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#define ln "\n"
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    string s;
    map<char,int> res = {{'A',2}, {'B',2}, {'C',2}, {'D',3},{'E',3},{'F',3},{'G',4},{'H',4},{'I',4},{'J',5},{'K',5},{'L',5},{'M',6},{'N',6},{'O',6},{'P',7},{'Q',7},{'R',7}, {'S',7}, {'T',8},{'U',8},{'V',8},{'W',9},{'X',9},{'Y',9},{'Z',9}};
    while(getline(cin, s)) {
        string aux = "";    
            for(char c: s){
                if(res.count(c)){
                   // cout << res.count(c) << " " << res[c] << ln;
                    aux+=to_string(res[c]);
                }
                else aux+=c;
            }
        cout << aux << ln;
    }
}
