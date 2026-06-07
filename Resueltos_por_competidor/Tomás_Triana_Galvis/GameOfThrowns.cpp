#include <bits/stdc++.h>
/*
 * Autor: Tomás Triana Galvis
 * Problema: Game of Throwns
 * Juez online: Kattisthrowns
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/throwns
 **/ 
using namespace std;

int main(int argc, char** argv) {
    int n,k;
    cin>>n>>k;
    vector<int> ans;
    string temp;
    int a,ansa = 0;
    while(k--){
        cin>>temp;
        if(temp == "undo"){
            cin>>temp;
            a=stoi(temp);
            while(a--){
                ans.pop_back();
            }
        }else{
            a= stoi(temp);
            ans.push_back(a);    
        }
    }
    for(auto x:ans){
        ansa+=x;
    }
    if(ansa<0){
        ansa%=n;
        if(ansa <0){
            ansa+=n;    
        }
        
    }else{
        ansa%=n;
    }
    cout<<ansa<<endl;
    return 0;
}
