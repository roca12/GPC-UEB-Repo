#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 /*
 * Autor: Tomás Triana Galvis
 * Problema: In Search of Convenience
 * Juez online: Codeforces 2275A
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2275/problem/A
 **/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,r,t,a,b;
    bool flag =false;
    cin>>t;
    while(t--){
        flag =false;
        cin>>x>>y>>r;
        for(int i=-100;i<=100;i++){
            for(int j=-100;j<=100;j++){
                a = x-i;
                b = y-j;
                if(pow(a,2)+pow(b,2)==pow(r,2)){
                    flag =true;
                    a = i;
                    b=j;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
 
 
    return 0;
}
