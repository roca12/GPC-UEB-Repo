/*
 * Autor: Miguel Lopez
 * Problema: Snakey String 
 * Juez online: RPC
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/QOJ-16818
 */

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int a,b; scanf("%d %d", &a,&b);
    vector<string> test(a);
    string aver = "";
    for(int i = 0; i < a; i++) {
        cin >> test[i];
    }
    for(int i = 0; i < b; i++) {
        for(int j = 0; j < a;  j++) {
            if(test[j][i] != '.')
            {
                aver+=test[j][i];
                break;
            }
        }
    }
    cout << aver << endl;
    return 0;
}
