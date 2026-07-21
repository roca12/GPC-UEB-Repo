/*
 * Autor: Juan Martinez
 * Problema: Cheap Travel (466A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/466/A
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m , a , b, temp, temp2;
    cin>>n>>m>>a>>b;
    temp = n;
    temp2 = 0;
    while(temp > 0){
        if(temp >= m) {
            temp -= m;
            temp2 += b;
        } else {
            temp--;
            temp2 += a;
        }
    }
    cout<<min( n*a , min( ((n + m - 1)/m)*b, temp2) )<<endl;
}
