/*
 * Autor: Miguel Lopez
 * Problema: Decoding the message.
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2161&mosmsg=Submission+received+with+ID+31296219
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
    int t; cin >> t;
    int help = 1;
    cin.ignore();
    string s; getline(cin, s);
    for(int i = 1; i <= t; i++) {
        if (i > 1) cout << ln;
        cout << "Case #" << i << ":" << ln;
        while(getline(cin, s) && !s.empty()) { 
        stringstream ss(s);
        string aux;
        vector<char> res;
        vector<string> vec;
        while(ss >> aux) {
            //cout << aux << " ";
            vec.push_back(aux);
        }
        int i = 0;
        int cont = 0;
        while(i < vec.size()) {
            string aux2 = vec[i];
            if(cont < aux2.length()) {
                res.push_back(aux2[cont]);
                i++;
                cont++;
            }
            else {
                i++;   
            }
        }
        for(int i = 0; i < res.size(); i++) {
            cout << res[i];
        }
        cout << ln;
    }
}
}
