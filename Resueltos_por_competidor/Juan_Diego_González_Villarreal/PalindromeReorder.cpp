#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char, int> um;
    string s;
    cin>>s;
    for(char &c: s){
        if(!um.count(c)){
            um[c]=1;
        }else{
            um[c]++;
        }
    }
    int impCnt = 0;
    string impar;
    string inicio, final;
    for(pair<char,int> p:um){
        if(p.second%2!=0){
            impCnt++;
            for(int i = 0;i<p.second;i++)impar+=p.first;
        }else{
            for(int i = 0;i<p.second/2;i++)inicio+=p.first;
        }
    }
    final = inicio;
    reverse(final.begin(), final.end());
    if(s.size()%2!=0 && impCnt==1){
        cout<<inicio<<impar<<final<<"\n";
    }else if(!impCnt){
        cout<<inicio<<final<<"\n";
    }else{
        cout<<"NO SOLUTION\n";
    }
}