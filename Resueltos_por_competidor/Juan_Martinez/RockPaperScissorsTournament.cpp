/*
 * Autor: EroMergeSort
 * Problema: Rock-Paper-Scissors Tournament
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/rockpaperscissors
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a; 
    while(cin >> a) {
    if(a == 0) break;
    int b; cin >> b;
    double games = ((a*b)*(a-1))/2;
    double win[a+1], loss[a+1];
    for(int i = 0; i < a; i++) {
        win[i+1] = 0, loss[i+1] = 0;
       // cout << i+1 << endl;
    }
    
    int cantjuegosemp = 0;
    bool emp = false;
    for(int i = 0 ;i < games; i++) {
        int num; cin >> num;
        string res; cin >> res;
        cin.ignore();
        int num2; cin >> num2;
        string res2; cin >> res2;
        cin.ignore();
        if(res == "paper" && res2 == "rock") win[num]++, loss[num2]++;
        else if(res == "scissors" && res2 == "paper")  win[num]++, loss[num2]++;
        else if(res == "rock" && res2 == "scissors")  win[num]++, loss[num2]++;
        else if(res2 == "paper" && res == "rock") win[num2]++, loss[num]++;
        else if(res2 == "scissors" && res == "paper")  win[num2]++, loss[num]++;
        else if(res2 == "rock" && res == "scissors")  win[num2]++, loss[num]++;
        else if(res == "rock" && res2 == "rock") cantjuegosemp++;
        else if(res == "scissors" && res2 == "scissors") cantjuegosemp++;
        else if(res == "paper" && res2 == "paper") cantjuegosemp++;

    }
    for(int i = 0; i < a; i++) {
        if((win[i+1] == 0 && loss[i+1] == 0)) {
            cout << "-" << endl;
        }
        else {
     //   cout << win[i+1] << " " << loss[i+1] << endl;
        double asd = (win[i+1]/(win[i+1]+loss[i+1]));        
        cout << fixed << setprecision(3) << asd << endl;
        }
    }
    cout << endl;
    }
}
