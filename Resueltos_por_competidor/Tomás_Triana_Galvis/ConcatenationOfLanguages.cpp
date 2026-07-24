#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Concatenation of Languages
 * Juez online: UVA 10887
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1828
 **/ 

int main(){
    ll t,n,m,ind =1;
    string a;
    unordered_set<string> ans;
    cin>>t;
    cin.ignore();
    while(t--){
        ans.clear();
        cin>>n>>m;
        vector<string> arr1(n),arr2(m);
        cin.ignore();
        
        for(int i =0;i<n;i++){
            getline(cin,a);
            arr1[i] = a;
        }
        for(int i=0;i<m;i++){
            getline(cin,a);
            arr2[i] = a;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                ans.insert(arr1[i]+arr2[j]);
            }
        }
        cout<<"Case "<<ind<<": "<<ans.size()<<"\n";
        ind++;
    }

    return 0;
}
