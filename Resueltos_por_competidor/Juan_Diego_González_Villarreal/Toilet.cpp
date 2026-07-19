#include <bits/stdc++.h>
#define vi vector<int>
#define ln "\n"
typedef long long ll;
using namespace std;

int main(){
    string s;
    cin>>s;
    int a = 0 ,b = 0, c = 0;
    for(int i = 1; i<s.size(); i++){
        if(i==1){
            if(s[i-1]=='U' && s[i]=='D'){
                a+=2;
                b++;
                c++;
            }else if(s[i-1]=='D' && s[i]=='U'){
                a++;
                b+=2;
                c++;
            }else if(s[i-1]=='D' && s[i]=='D'){
                a++;
            }else if(s[i-1]=='U' && s[i]=='U'){
                b++;
            }
        }else{
            if(s[i]=='D'){
                a+=2;
                if(s[i-1]!=s[i])c++;
            }else{
                b+=2;
                if(s[i-1]!=s[i])c++;
            }
        }
    }
    cout<<a<<ln<<b<<ln<<c;
}
