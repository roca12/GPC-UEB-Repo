#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Minus Two
 * Juez online: Codeforces 2259B
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2259/problem/B
 **/

int main()
{   int t,ans1, ans2, ans3,a,n,ans;
    cin>>t;
    while(t--){
        ans1=0,ans2=0,ans3=0;
        cin>>n;
        while(n--){
            cin>>a;
            if(a%2!=0){
                ans1++;
            }else{
                if((a/2)%2==0){
                    ans2++;
                }else{
                    ans3++;
                }
            }
        }
        ans=max(ans1,ans2);
        ans= max(ans,ans3);
        cout<<ans<<"\n";
    }

    return 0;
}
