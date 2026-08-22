#include <iostream>

using namespace std;
/*
	 * Autor: mariana
	 * Problema : Alarm Clock
	 * Juez online: vjudge
	 * Veredicto: Accepted
	 * URL: https://vjudge.net/contest/841803#problem/A
	 */
int main()
{
    int h1,h2,m1,m2,horas,minutos;
    while(true){
        cin>>h1;
        cin>>m1;
        cin>>h2;
        cin>>m2;
        minutos=0;
        horas=0;
        if(h1==0&&h2==0&&m1==0&&m2==0){
            break;
        }
        minutos=m2-m1;
        minutos=(minutos+60)%60;
        if(m1+minutos>=60){
            h1+=1;
        }
        horas=h2-h1;
        horas =(horas+24)%24;
        cout << ((horas*60) + (minutos%60))<< endl;
    }
}
