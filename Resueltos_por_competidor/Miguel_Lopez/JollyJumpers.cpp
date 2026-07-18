/*
 * Autor: Miguel Lopez
 * Problema: Jolly Jumpers
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/UVA-10038
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
    while(cin >> a) {       
        if(a == 0) break;
        vector<int> cant(a);
        for(int &i : cant) {
            cin >> i;
        }
        //sort(cant.begin(), cant.end());
        int l = 0, r = 1;
        int res = a;
        set<int> canti;
        while(r < a) {
           // cout << abs(cant[l] - cant[r]) << endl;
            if(a == 1) {
                break;
            }
            if(abs(cant[l] - cant[r]) <= a-1) {
                res = abs(cant[l] - cant[r])-1;
                canti.insert(res);
                l++, r++;
            }
            else {
                break;
            }
        }
        if(canti.size() == a-1) {
                cout << "Jolly" << endl;
            }
        else {
            cout << "Not jolly" << endl;
        }
    }
}
