/*
 * Autor: Juan Martinez
 * Problema: Magic Numbers (320A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/320/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int con1 = 0, con4 = 0;
    string s;
    cin>>s;
    bool b = true;
    bool sec = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') {
            con1++;
            con4 = 0;
        }
        else if(s[i] == '4') {
            con4++;
        } else {
         b = false;
         break;
        }
        if((con4 > 0 && con1 == 0) || con4 > 2){
            b = false;
            break;
        }
    }
    if(b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
