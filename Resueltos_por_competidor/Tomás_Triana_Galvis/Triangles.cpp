
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Triangles
 * Juez online: Codeforcesgym101473
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/101473/attachments
 **/ 
int binarysearch(vector<ll> &arr, int l, int r, int x) {
    while(r-l>1){
        int mid = (l+r)/2;
        if(arr[mid] ==x) return mid;
        if(arr[mid]<x) l = mid;
        else r = mid;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,ans=0,temp,cmp,trgt;
    int ind;
    cin>>n;
    vector<ll> pre(n);
    vector<bool> vis(n);
    cin>>x;
    pre[0]= x;
    vis[0]= false;
    for(int i=1;i<n;i++){
        cin>>x;
        pre[i]=pre[i-1]+ x;
        vis[i]= false;
    }

    if(pre[n-1]%3!=0){
        cout<<0<<"\n";
    }else{
        trgt = pre[n-1]/3;
        for(int r = 0; r<n; r++){
            if(vis[r]) continue;
            int it1 = binarysearch(pre,0,n-1,(pre[r]+trgt)%pre[n-1]);
            int it2 = binarysearch(pre,0,n-1,(pre[r]+2*trgt)%pre[n-1]);
            vis[r] = true;
            if(it1 == -1) continue;
            vis[it1]=true;
            if(it2 == -1)continue;
            vis[it2]=true;
            ans++;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
