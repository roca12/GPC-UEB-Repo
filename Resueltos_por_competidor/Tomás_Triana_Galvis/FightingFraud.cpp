#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Fighting Fraud
 * Juez online: 
 * Veredicto: Accepted
 * Url: 
 **/ 

int main(){
    int n;
    bool flag = true;
    string ins,cosa;
    cin>>n;
    map<string,int> ans;
    set<string> cosas;
    while(n--){
        cin>>ins>>cosa;
        if(ins== "pickup"){
            if(cosas.count(cosa)==1){
                flag = false;
            }else{
                cosas.insert(cosa);
                ans[cosa]++;
            }

        }else{
            if(cosas.count(cosa)==1){
                ans[cosa]--;
            }else{
                flag = false;
            }

        }
    }
    for(auto a:cosas){
        if(ans[a]!=0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    return 0;
}
