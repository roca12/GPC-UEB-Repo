#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> used;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    do{
        if(!used.count(s)) used.insert(s);
    }while(next_permutation(s.begin(), s.end()));
    cout<<used.size()<<"\n";
    for(string val:used) cout<<val<<"\n"; 
}