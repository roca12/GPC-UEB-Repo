#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * Autor: Tomás Triana Galvis
 * Problema: CahokiaRuins
 * Juez online: Codeforcesgym101064C
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/101064/problem/C
 **/
int main()
{
    int h,w,dif=0,temp;
    cin>>h>>w;
    vector<int> l(h),r(h);

    for(int i=0;i<h;i++){
        cin>>l[i];
    }
    for(int i=0;i<h;i++){
        cin>>r[i];
    }
    for(int i=0;i<h;i++){
        temp = l[i]+r[i];
        dif = max(dif,temp);
    }
    cout<<(w-dif)/2.0<<"\n";
    return 0;
}
