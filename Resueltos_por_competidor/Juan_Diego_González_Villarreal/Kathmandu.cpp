#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,t,aux;

    cin>>n>>m>>t;

    vector <int> comida;

    comida.push_back(0);
    comida.push_back(m);

    for(int i = 1;i<=t;i++){
        cin>>aux;
        comida.push_back(aux);
    }

    sort(comida.begin(),comida.end());

    for(int i = 1;i<comida.size();i++){
        if((comida[i]-comida[i-1])>=n){
            cout<<"Y"<<endl;
            aux = -1;
            break;
        }
    }

    if(aux!=-1){
        cout<<"N"<<endl;
    }
}
