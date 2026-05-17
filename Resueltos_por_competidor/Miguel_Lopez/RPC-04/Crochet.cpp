#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,int> dias = {{"Mon",0},{"Tue",1},{"Wed",2},{"Thu",3},{"Fri",4},{"Sat",5},{"Sun",6}};

    string sd, sh, ed, eh;
    cin >> sd >> sh >> ed >> eh;

    int a = dias[sd];
    int b = dias[ed];

    int hh1 = stoi(sh.substr(0,2));
    int mm1 = stoi(sh.substr(3,2));
    int hh2 = stoi(eh.substr(0,2));
    int mm2 = stoi(eh.substr(3,2));

    int t1 = a * 24 * 60;
    t1 = t1 + hh1 * 60;
    t1 = t1 + mm1;

    int t2 = b * 24 * 60;
    t2 = t2 + hh2 * 60;
    t2 = t2 + mm2;

    int diff = t2 - t1;
    if(diff <= 0){
        int semana = 7 * 24 * 60;
        diff = diff + semana;
    }

    int total = diff;
    int minutos_dia = 24 * 60;
    int d = total / minutos_dia;
    total = total % minutos_dia;
    int h = total / 60;
    int m = total % 60;

    vector<string> parts;

    if(d > 0){
        string s = to_string(d);
        s = s + " day";
        if(d > 1){
            s = s + "s";
        }
        parts.push_back(s);
    }

    if(h > 0){
        string s = to_string(h);
        s = s + " hour";
        if(h > 1){
            s = s + "s";
        }
        parts.push_back(s);
    }

    if(m > 0){
        string s = to_string(m);
        s = s + " minute";
        if(m > 1){
            s = s + "s";
        }
        parts.push_back(s);
    }

    int sz = parts.size();

    if(sz == 3){
        cout << parts[0] << ", " << parts[1] << ", " << parts[2] << "\n";
    } else if(sz == 2){
        cout << parts[0] << " and " << parts[1] << "\n";
    } else {
        cout << parts[0] << "\n";
    }

    return 0;
}
