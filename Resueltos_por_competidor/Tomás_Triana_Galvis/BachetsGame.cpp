#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Bachet's Game
 * Juez online: UVA10404
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1345
 **/

int main(){
    int x,n,diff;
    while(cin>>x){
        cin>>n;
        vector<int> pos(n);
        vector<bool> ans(x+1,0);
        for(int i =0;i<n;i++){
            cin>>pos[i];
        }
        for(int i=1;i<=x;i++){
            for(int j=0;j<n;j++){
                diff = i-pos[j];

                if(diff<0){
                    continue;
                }
                if(!ans[diff]){
                    ans[i] = true;
                    break;
                }
            }
        }


        if(ans[x]){
            cout<<"Stan wins\n";
        }else{
            cout<<"Ollie wins\n";
        }
    }

    return 0;
}
