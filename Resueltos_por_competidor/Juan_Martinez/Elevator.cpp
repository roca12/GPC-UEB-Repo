/*
 * Autor: Juan Martinez
 * Problema:  Elevator (120A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/120/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    char s[6];
    string st;
    int a;
    scanf("%s", s);
    scanf("%d", &a);
    stringstream ss;
    for(int i = 0; i < 5; i++){
        ss<<s[i];
    }
    st = ss.str();

    if(st == "front") {
        if(a == 1) printf("%s", "L");
        else printf("%s", "R");
    } else {
        if(a == 2) printf("%s", "L");
        else printf("%s", "R");
    }
    return 0;
}
