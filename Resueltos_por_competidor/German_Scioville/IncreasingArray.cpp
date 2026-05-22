/*
 * Autor: Scioville
 * Problema: Increasing Array (https://cses.fi/problemset/task/1094)
 * Juez online: CSES
 * Veredicto: accepted  
 * Hells gate arrested and shine heaven now
 * */
#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;


int main()
{
int t,n;

ll aux;

bool x;

x = true;
scanf("%d",&t);

vector<int> lista(t);

for(int i =0 ;i<t;i++){
    scanf("%d",&n);
    lista[i]= n;
}

n = 0;
aux = 0;

    for(int i =1 ;i<t;i++){
    if(lista[i]<lista[i-1]){
        aux += lista[i-1]-lista[i];
        lista[i] = lista[i-1];

}
    }
printf("%lld\n",aux);

}
