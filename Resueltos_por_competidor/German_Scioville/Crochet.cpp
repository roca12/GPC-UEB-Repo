/*
 * Autor: Scioville
 * Problema: Crochet Competition (https://open.kattis.com/problems/crochetcompetition)
 * Juez online: Katiis
 * Veredicto: accepted  
 * After all.Not all good times must come to an end.
 * */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, f, h, m, x, y, auxd, auxh, auxm, aux, aux2, t;

    string date1,date2,time1,time2,dia, hour, minuto;
    d = 0;
    f = 0;
    dia = "days";
    hour = "hours";
    minuto = "minutes";

    cin >> date1;
    cin >>time1;

    cin >> date2;
    cin >>time2;

    h = stoi(time1.substr(0,2));
    m = stoi(time1.substr(3,2));

    x = stoi(time2.substr(0,2));
    y = stoi(time2.substr(3,2));

    string day[] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };

    for (int i = 0; i < 7; i++)
    {
        if(date1==day[i])
        {
            d = i+1;
        }

        if(date2==day[i])
        {
            f = i+1;
        }
    }

    aux = (d * 1440) + (h * 60) + m;
    aux2 = (f * 1440) + (x * 60) + y;

    t = aux2 - aux;
    if (t < 0)
    {
        t += 7 * 1440;
    }
    else if (t == 0)
    {
        t = 7 * 1440;
    }

    auxd = t / 1440;
    t %= 1440;

    auxh = t / 60;
    auxm = t % 60;

    if (auxd == 1)
    {
        dia = "day";
    }

    if (auxh == 1)
    {
        hour = "hour";
    }
    if (auxm == 1)
    {
        minuto = "minute";
    }

    if (auxd != 0 && auxh != 0 && auxm != 0)
    {
        cout << auxd << " " << dia << ", " << auxh << " " << hour << ", " << auxm << " " << minuto << endl;
    }
    else if (auxd == 0 && auxh != 0 && auxm != 0)
    {
        cout << auxh << " " << hour << " and " << auxm << " " << minuto << endl;
    }
    else if (auxd == 0 && auxh == 0 && auxm != 0)
    {
        cout << auxm << " " << minuto << endl;
    }
    else if (auxd != 0 && auxh == 0 && auxm == 0)
    {
        cout << auxd << " " << dia << endl;
    }
    else if (auxd != 0 && auxh != 0 && auxm == 0)
    {
        cout << auxd << " " << dia << " and " << auxh << " " << hour << endl;
    }
    else if (auxd != 0 && auxh == 0 && auxm != 0)
    {
        cout << auxd << " " << dia << " and " << auxm << " " << minuto << endl;
    }
    else if (auxd == 0 && auxh != 0 && auxm == 0)
    {
        cout << auxh << " " << hour << endl;
    }
    else if (auxd == 0 && auxh == 0 && auxm == 0)
    {
        cout << "0 minutes" << endl;
    }
}
