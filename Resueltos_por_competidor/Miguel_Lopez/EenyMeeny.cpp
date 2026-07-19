/*
 * Autor: Miguel Lopez
 * Problema: Eeny Meeny
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/eenymeeny
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	string s;
    int cant = 1;
    vector<string> person;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') cant++;
    }
    int t; cin >>t;
    person.resize(t);
    bool A = true;
    for(int i = 0; i < t; i++) cin>>person[i];

    queue<string> TA, TB;
    int indice = 0;
    int cont = 0;
    while(!person.empty()){
        //cout << person[indice] << "->" << cont << endl;
        if(cont == (cant-1)){
            if(A) TA.push(person[indice]);
            else TB.push(person[indice]);
            person.erase(person.begin() + indice);
            cont = 0;
            A = !A;
        } else indice++, cont++;
        if(indice == person.size()) indice = 0;
    }
    cout<<TA.size()<<endl;
    while(!TA.empty()){
        cout<<TA.front()<<endl;
        TA.pop();
    }
    cout<<TB.size()<<endl;
    while(!TB.empty()){
        cout<<TB.front()<<endl;
        TB.pop();
    }
}
