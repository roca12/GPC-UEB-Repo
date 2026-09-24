#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: High School: Become Human
 * Juez online: Codeforces 987B
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/987/B
 **/ 

int main(){
    double x,y,l,r;
    cin>>x>>y;
    l=y*log(x);
    r = x*log(y);
    if(l>r){
        cout<<">\n";
    }else if(l<r){
        cout<<"<\n";
    }else{
        cout<<"=\n";
    }

    return 0;
}
