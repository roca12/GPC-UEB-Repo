/*
 * Autor: Juan Martinez
 * Problema:  Only One Digit (2126A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2126/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, y;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&y);
        stringstream ss;
        string s;
        ss<<y;
        ss>>s;
        int mini = INT_MAX;
        if(s.size() > 1) {
        for(int i = 0; i < s.size(); i++){
            int num, num2;
            ss.clear();
            ss<<s[i];
            ss>>num;
            mini = min(mini, num);
        }
        } else {
            mini = y;
        }
        for(int i = 9; i >= 0; i--) {
            if(mini == i) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
