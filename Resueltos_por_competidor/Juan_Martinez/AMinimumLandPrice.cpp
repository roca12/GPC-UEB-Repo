/*
 * Autor: Juan Martinez
 * Problema: A Minimum Land Price(CCPL 2026 R8-L)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/845664#problem/L
 */
#include <bits/stdc++.h>

using namespace std;

int pot(int num, int pote) {
    int aux = num;
    pote--;
    while(pote--) num *= aux;
    return num;
}

int main()
{
    int t, n, suma, con; cin>>t;
    while(t--) {
        vector<int> arr;
        while(cin>>n) {
            if(n != 0) arr.push_back(n);
            else break;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        suma = 0;
        bool b = 1;
        con = 1;
        for(int i : arr) {
            int aux = pot(i, con);
            suma += 2 * aux;
            //cout<<aux<<endl;
            con++;
            if(suma > 5000000) {
                b = 0;
                break;
            }
        }
        if(b) cout<<suma<<"\n";
        else cout<<"Too expensive"<<"\n";
    }
    return 0;
}
