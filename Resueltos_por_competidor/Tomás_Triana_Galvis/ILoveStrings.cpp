#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema:  I Love Strings!!
 * Juez online: UVA 10679
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1620
 **/
 #include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

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
int main()
{
    ll t,q;
    cin>>t;
    string s, pat;
    while(t--){
        cin>>s;
        cin>>q;
        while(q--){
            cin>>pat;
            if(KMPsearch(pat,s)){
                cout<<"y\n";
            }else{
                cout<<"n\n";
            }
        }
    }


    return 0;
}
