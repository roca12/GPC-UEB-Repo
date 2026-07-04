/*
 * Autor: Juan Martinez
 * Problema: Squats (424A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/424/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mit, par = 0, sen = 0, contador, aux;
    scanf("%d", &n);
    string temp;
    cin>>temp;
    bool ham[n];
    for(int i = 0; i < n; i++){
        if(temp[i] == 'X'){
            par++;
            ham[i] = true;
        } else {
            sen++;
            ham[i] = false;
        }
    }
    mit = n/2;
    bool b;
    if(par < mit){
        contador = abs(mit - par);
        aux = par;
        b = true;
    } else if(par > mit) {
        contador = abs(mit - sen);
        aux = sen;
        b = false;
    }
    for(int i = 0; i < n && aux < mit; i++){
        if(ham[i] != b) {
            ham[i] = b;
            aux++;
        }
    }

    printf("%d\n", contador);

    stringstream ss;
    for(int i = 0; i < n; i++) {
        if(ham[i]) ss<<'X';
        else  ss<<'x';
    }
    cout<<ss.str()<<endl;
    return 0;
}
