#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b && b==c)cout<<'A';
    else if(b!=a && a==c) cout<<'B';
    else if(c!=a && a==b) cout<<'C';
    else if(b==a && a==c) cout<<'*';
}