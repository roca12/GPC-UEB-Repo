/*
 * Autor: Miguel Lopez
 * Problema: Dominant Strings
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1686&mosmsg=Submission+received+with+ID+31296409
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
bool cmp(string a, string b) {
    return a.length() > b.length();
}
bool check(array<int,26> a1, array<int,26> a2) {
        for(int i = 0; i < 26; i++) {
            if(a1[i] < a2[i]) return false;
        }
        return true;
}
int main() {
    init_code();
    string s;
    vector<string> res;
    vector<string> win;
    while(cin >> s) {
        win.push_back(s);
    }
    
    vector<array<int,26>> acc;
    sort(win.begin(), win.end(), cmp);
    for(int i = 0; i < win.size(); i++) {
        array<int,26> freq{};
        for(char c : win[i]) {
            freq[c - 'a']++;
        }
        bool flag = false;
        for(array<int,26> aux: acc) {
            if(check(aux, freq)){
                flag = true;
                break;
            }   
        }
        if(!flag) {
            acc.push_back(freq);
            res.push_back(win[i]);
        }
    }
    sort(res.begin(), res.end());
    for(string s: res) {
        cout << s << ln;
    }
}
