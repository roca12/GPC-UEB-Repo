/*
 * Autor: Miguel Lopez
 * Problema: Gas Station
 * Juez online: UvaHunt
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3743
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int a,b;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) break;
        vector<pair<int,int>> local;
        for(int i = 0; i < b; i++) {
            int n1,n2; cin >> n1 >> n2;
            //if(n1 - n2 < 0) local.push_back({0, n1+ n2});
            int l = max(0, n1-n2);
            int r = min(a, n1+n2);
            local.push_back({l,r});
        }
        sort(local.begin(), local.end());
        priority_queue<int> test;
        int aux = 0, rec = 0;
        int i = 0;
        while(aux < a) {
            if(i < (int)local.size() && local[i].first <= aux) {
                test.push(local[i].second);
                i++;
                continue;
            }
            if(test.empty() || test.top() <= aux) break;
            aux = test.top();
            rec++;
        }
        if(aux >= a) cout << b-rec << endl;
        else cout << -1 << endl;
    }
}
//5 5 || 0 - 10
//11 8 || // 3 - 19 <-
//20 10 || 10 - 30
//30 3 || //27 - 33 <-
//40 10 || 30 - 40
