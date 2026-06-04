/*
 * Autor: Juan Martinez
 * Problema: Subtractions (267A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/267/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int casos;
    scanf( "%u", &casos);
    int cantidad;
    int num1, num2;

    while(casos--) {

        cantidad = 0;
        scanf( "%u", &num1);
        scanf( "%u", &num2);

        while(true) {
            if(num1 == num2) {
                cantidad ++;
                num1 -= num2;
            } else if(num1 > num2) {
                cantidad += num1 / num2;
                num1  = num1 % num2;
            } else {
                cantidad += num2 / num1;
                num2  = num2 % num1;
            }
    //        cout<< "num1 " << num1 << endl;
   //         cout<< "num2 " << num2 << endl;
            if((num1 < 1) || (num2 < 1)) break;
        }
        cout<< cantidad << endl;
    }

    return 0;
}
