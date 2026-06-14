/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Leap Frog
 * Juez online: RPC
 * Veredicto: Accepted
 * URL:
 */
#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

void clean(string &s){
    string tmp;
    for(char &c: s){
        tolower(c);
        if(c<97 && c>122) continue;
        tmp+=c;
    }
}

void encrypt(int d, string &s,string &ns, char dir, int &pos){
    int cnt = 1;
    if(dir=='r'){
        for(int i = 0; i<s.size(); i++){
            if(cnt%d==0 && ns[i]=='_'){
                ns[i]=s[pos++];
                cnt++;
            }else if(ns[i]=='_') cnt++;
        }
    }else{
        for(int i = s.size()-1; i>=0; i--){
            if(cnt%d==0 && ns[i]=='_'){
                ns[i]=s[pos++];
                cnt++;
            }else if(ns[i]=='_') cnt++;
        }
    }
}

void decrypt(int d, string &s,string &ns, char dir){
    int cnt = 1;
    if(dir=='r'){
        for(int i = 0; i<s.size(); i++){
            if(cnt%d==0 && s[i]!='_'){
                ns+=s[i];
                s[i]='_';
                cnt++;
            }else if(s[i]!='_') cnt++;
        }
    }else{
        for(int i = s.size()-1; i>=0; i--){
            if(cnt%d==0 && s[i]!='_'){
                ns+=s[i];
                cnt++;
            }else if(s[i]!='_') cnt++;
        }
    }
}

vi toKey(string &s){
    vi r;
    for(char &c: s)r.push_back((c-'a'+2));
    return r;
}

int main(){
    string t,key,text,ns;
    cin>>t>>key>>text;
    for(int i = 0; i<text.size(); i++) ns+='_';
    vi keys = toKey(key);
    int pos = 0;
    char d = 'r';
    if(t=="E"){
        clean(text);
        for(int i = 0; i<keys.size(); i++){
            if(i%2==0){
                encrypt(keys[i], text,ns,d,pos);
                d='l';
            }
            else{
                encrypt(keys[i], text,ns,d,pos);
                d='r';
            }
        }
        d = (d=='r')? 'l':'r';
        
        for(int i = 0;i<ns.size(); i++){
            if(ns[i] == '_')ns[i] = text[pos++];
        }
    }else{
         for(int i = 0; i<keys.size(); i++){
            if(i%2==0){
                decrypt(keys[i], text,ns,d);
                d='l';
            }
            else{
                decrypt(keys[i], text,ns,d);
                d='r';
            }
         }
         d = (d=='r')? 'l':'r';
         for(int i = 0;i<ns.size(); i++){
            if(text[i] != '_')ns[i] += text[i];
         }
    }
    cout<<ns<<"\n";
}