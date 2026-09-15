#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Is y a vowel?
 * Juez online: Kattis isyavowel
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/isyavowel
 **/ 
int main()
{
    string a;
    cin>>a;
    int ans1=0,ans2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            ans1++;
            ans2++;
        }
        if(a[i]=='y'){
            ans2++;
        }
    }
    cout<<ans1<<" "<<ans2<<"\n";
    return 0;
}
