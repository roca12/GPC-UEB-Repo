    /*
     * Autor: Miguel Lopez
     * Problema: Lotto
     * Juez online: uHunt
     * Veredicto: Accepted
     * URL: https://vjudge.net/contest/822069#problem/A
     */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
    vector<int> numeroPre;
    vector<int> numeroPos;
    void backtrack(int pos) {
        if (numeroPre.size() == 6) {
            for (int i = 0; i < 6; i++) {
                if (i > 0) printf(" ");
                printf("%d", numeroPre[i]);
            }
        printf("\n");
        return;
        }
        for (int i = pos; i < numeroPos.size(); i++) {
            numeroPre.push_back(numeroPos[i]);
            backtrack(i + 1);
            numeroPre.pop_back();
        }
    }

int main(){
    bool primero = true;
        int t; scanf("%d", &t);
        while(t != 0) {
        numeroPre.clear();
        numeroPos.clear();
        for(int i = 0; i < t ; i++) {
            int n; scanf("%d", &n);
            numeroPos.push_back(n);
        }

        if (!primero) {
        printf("\n");
        }
        primero = false;
        backtrack(0);
        scanf("%d", &t);
    }
    return 0;
}

