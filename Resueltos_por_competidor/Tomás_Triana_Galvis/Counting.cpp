#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Counting
 * Juez online: Atcoder abc209a
 * Veredicto: Accepted
 * Url: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
 **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b,ans =0;
    cin>>a>>b;
    if(b>=a){
        ans =b-a;
        ans++;
    }
    cout<<ans<<"\n";

    return 0;
}
