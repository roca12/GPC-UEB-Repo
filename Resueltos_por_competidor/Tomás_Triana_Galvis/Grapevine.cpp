#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Grapevine
 * Juez online: UVA12192
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3344
 **/ 
int main()
{
    ll n,m,ans,l,r,mx,actR,actC,finR,finC,fin;
    cin>>n>>m;
    while(true)
    {
        ans = -1;
        vector<vector<ll>> mat(n, vector<ll>(m));
        if(n==0 && m ==0)
        {
            break;
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                cin>>mat[i][j];
            }
        }
        mx = min(m,n);
        ll a,b,c,mn;
        ll act;
        cin>>a;
        for(int s = 0; s<a; s++)
        {
            ans = -1;
            cin>>l>>r;
            for(int i = 0; i<n; i++)
            {
                actR=i,actC=-1;
                ll lo =0, hi=m-1;
                while(lo<=hi){
                    ll mid =lo+(hi-lo)/2;
                    act = mat[i][mid];
                    if(act>=l){
                        actC = mid;
                        hi =mid-1;
                    }else{
                        lo=mid+1;
                    }
                }
                if(actC != -1 && mat[i][actC] > r) actC = -1;
                
                b = n-actR-1;
                c = m-actC-1;
                mn = min(b,c);
                finR = actR+mn;
                finC = actC+mn;
                    while(finC>=actC && finR>=actR && ans<(finR-actR+1) && actC!=-1)
                    {
                        fin = mat[finR][finC];
                        if(fin >=l && fin <=r)
                        {
                            ans = finR-actR+1;
                            break;
                        }
                        finC--;
                        finR--;

                    }

            }
            if(ans == 0){
                ans = 1;
            }
            if(ans == -1){
                ans = 0;
            }
            cout<<ans<<"\n";
        }

        cout<<"-\n";
        cin>>n>>m;
    }
    return 0;
}
