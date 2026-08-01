/*
 * Autor: Juan Martinez
 * Problema: Babelfish
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s1, s2;
    vector<string> arr(2);
    map<string,string> dicc;

	while(getline(cin, s)) {
        stringstream ss(s);
        int i = 0;
        while(ss>>arr[i]) {
           // cout<<arr[i]<<endl;
            i++;
        }
        //cout<<i<<endl;
        if(i == 2) dicc[arr[1]] = arr[0];
        else if(i != 0){
            if(dicc[arr[0]].empty()) cout<<"eh"<<endl;
            else cout<<dicc[arr[0]]<<endl;
        }
    }
}
