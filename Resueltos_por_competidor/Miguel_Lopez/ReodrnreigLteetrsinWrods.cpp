/*
 * Autor: Miguel Lopez
 * Problema: Reodrnreig Lteetrs in Wrods
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=4389&mosmsg=Submission+received+with+ID+31294800
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#include <sstream>
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
    //init_code();
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        vector<string> vec;
        vector<string> res;
        string s,s2;
        getline(cin, s);
        getline(cin, s2);
        string aux;
        stringstream ss(s);
        while(ss >> aux) {
            res.push_back(aux);
        }
        stringstream ss2(s2);
        string aux2;
            while(ss2 >> aux2) {
            bool found = false;
              for(int i = 0; i < (int) res.size(); i++) {
                string str = res[i];
                if(!found && aux2[0] == str[0] && aux2[(int)aux2.length()-1] == str[(int)str.length()-1]&&(int)aux2.length() == (int)str.length()) {
                    string mid1 = aux2.substr(1, aux2.length()-2);
                    string mid2 = str.substr(1, str.length()-2);
                    sort(mid1.begin(), mid1.end());
                    sort(mid2.begin(), mid2.end());
                    if(mid1 == mid2) {
                    vec.push_back(str);
                    found = true;   
                    break;
                    }
                }
            }
             if(!found) vec.push_back(aux2);
        }
        for(int i = 0; i < (int)vec.size(); i++) {
            if(i + 1 == (int)vec.size()) cout << vec[i] << ln;
            else cout << vec[i] << " ";
        } 
    }
}
