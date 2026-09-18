/*
 * Autor: Miguel Lopez
 * Problema: I Love Strings!!
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1620&mosmsg=Submission+received+with+ID+31299459
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
void computeLPSArray(string pat, int M, int lps[]) {
    int len = 0;
    int i = 1;
    lps[0] = 0;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = len;
                i++;
            }
        }
    }
}

bool KMPsearch(string pat, string txt) {
    int M = pat.size();
    int N = txt.size();
    int lps[M];
    int j = 0;
    computeLPSArray(pat, M, lps);
    int i = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {
            return true;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return false;
}
int main() {
    init_code();
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int q; cin >> q;
        cin.ignore();
        while(q--) {
            string ss; cin >> ss;
            if(KMPsearch(ss, s)) cout << "y" << ln;
            else cout << "n" << ln;
        }        
    }    
}
