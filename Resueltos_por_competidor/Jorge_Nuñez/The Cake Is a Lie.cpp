/*
 * Autor: Jorge Nuñez
 * Problema: The Cake Is a Lie
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1519/B
 */

#include <bits/stdc++.h>
#define ln "\n"
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll, ll>>
#define dbg(x) cerr << x << " <-----" << "DEBUG" << ln;
using namespace std;

typedef long long int ll;

#define all(x) (x).begin(), (x).end()
#define add(x) push_back(x)

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    cin>>c;

    int dp[100][100];

    dp[0][0] = 0;

    for(int j=1;j<100;j++) {
        dp[0][j]=dp[0][j-1]+1;
    }

    for(int i=1;i<100;i++) {
        dp[i][0]=dp[i-1][0]+1;
    }

    for(int i=1;i<100;i++) {
        for (int j=1;j<100;j++) {
            int arriba=dp[i-1][j]+(j+1);
            int izquierda=dp[i][j-1]+(i+1);

            dp[i][j]=min(arriba,izquierda);
        }
    }

    while (c--) {
        int a,b,e;
        cin>>a>>b>>e;

        if(dp[a-1][b-1]==e) {
            cout<<"Yes"<<ln;
        } else{
            cout<<"No"<<ln;
        }
    }

    return 0;
}


    

