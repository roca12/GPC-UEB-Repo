/*
 * Autor: Scioville
 * Problema: How Many Balls? (https://open.kattis.com/problems/howmanyballs)
 * Juez online: Katiis
 * Veredicto: accepted  
 * Like play ng a ch lkboard on a t rntable,like playing a KNIFE on a BREATHING RIBCAGE
 * 
 * 
 * Delete Her
 * */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p,q,a,b,c,g,cuadratica,x,raiz;
    cin>>p>>q;
    long long aux;
    bool encontrado;

    encontrado = false;
    aux =1;
    while(aux <= 1000000)
    {

        a =p;
        b = (2*p*aux)-(p)-(2*aux*q);
        c = p*((aux*aux)-(aux));
        x = (b*b)-(4*(a)*(c));
        if(x>=0)
        {
            raiz = (long long)round(sqrt((b*b)-(4*(a)*(c))));
            if(raiz*raiz== x)
            {
                if((-b+raiz)>=0 &&((-b+raiz))%(2*a)==0)
                {
                    g = (-b+raiz)/(2*a);

                    if(g>=aux)
                    {
                        cout<< aux << " " << g <<endl;
                        encontrado = true;
                        break;
                    }
                }

            }
        }

        aux++;
    }

    if(!encontrado)
    {
        cout<<"impossible"<<endl;
    }

}
