#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Bikes and Barricades
 * Juez online: Kattis bikesandbarricades
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/bikesandbarricades
 **/ 
int main(){
    int n;
    double xi,yi,xf,yf,b,ans = -1.0,m;
    cin>>n;
    while(n--){
        cin>>xi>>yi>>xf>>yf;
        if(xi<0 && xf <0){
            continue;
        }
        if(xi>0 && xf>0){
            continue;
        }
        m = (yf-yi)/(xf-xi);
        b = yi-(m*xi);
        if(b>0){
            if(ans ==-1.0){
                ans = b;
            }
            ans = min(ans,b);
        }

    }
    if(ans ==-1.0){
        cout<<"-1.0\n";
    }else{
        printf("%.16f",ans);
    }

    return 0;
}
