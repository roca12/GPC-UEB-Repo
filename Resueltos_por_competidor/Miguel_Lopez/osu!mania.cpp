/*
 * Autor: Miguel Lopez
 * Problema: Osu!Mania
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2009/problem/B
 */


#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void init_code() {
  //  ios_base::sync_with_stdio(false);
 //   cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    int n; scanf("%d", &n);
    while(n--) {
        int t; scanf("%d", &t);
        vector<int> cast;
        for(int i = 0; i < t ; i++) {
            string a;
            cin >> a;     
            for(int j = 0; j < 4; j++) {
                if(a[j] == '#') {
                    cast.push_back(j+1);
                }
            }
        }
        reverse(cast.begin(), cast.end());
        for(int z : cast) {
            printf("%d ", z);
        }
        printf("\n");
    }
    return 0;

    }




