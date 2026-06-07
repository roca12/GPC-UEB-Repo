#include <bits/stdc++.h>
/*
 * Autor: Tomás Triana Galvis
 * Problema: DRM Messages
 * Juez online: Kattisdrmmessages
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/drmmessages
 **/ 
using namespace std;
int main(int argc, char** argv) {
    string enc,e1="",e2="";
    int ee1 = 0, ee2 = 0;
    cin>>enc;
    for(int i = 0; i<enc.size()/2;i++){
        e1+=enc[i];
    }
    for(int i = enc.size()/2; i<enc.size();i++){
        e2+=enc[i];
    }
    for(int i = 0; i<e1.size();i++){
        ee1+=e1[i]-65;
    }
    for(int i = 0; i<e1.size();i++){
        ee2+=e2[i]-65;
    }
    ee1%=26;
    ee2%=26;
    for(int i = 0; i<e1.size();i++){
        e1[i]+=ee1;
        if(e1[i]>90){
            e1[i]-=26;
        }
    }
    for(int i = 0; i<e2.size();i++){
        e2[i]+=ee2;
        if(e2[i]>90){
            e2[i]-=26;
        }
    }
    for(int i = 0; i<e1.size();i++){
        e1[i]+= e2[i]-65;
        if(e1[i]>90){
            e1[i]-=26;
        }
    }
    cout<<e1<<endl;
     
    return 0;
}
