/*
 * Autor: Juan Martinez
 * Problema: Tic-Tac-Toe (I) 
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/SPOJ-TOE1
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, o , x; cin>>t;
    string temp[3];
    while(t--){
        x = 0;
        o = 0;
        for(int i = 0; i < 3; i++) {
            cin >> temp[i];
            for(int j = 0; j < 3; j++) {
                //cout << temp[j] << endl;
                if(temp[i][j] == 'X') x++;
                else if(temp[i][j] == 'O') o++;
            }
        }
        bool xwins = false, owins = false;
        if(
            (temp[0][0] == 'X' && temp[0][1] == 'X' & temp[0][2] == 'X') ||
            (temp[1][0] == 'X' && temp[1][1] == 'X' & temp[1][2] == 'X') ||
            (temp[2][0] == 'X' && temp[2][1] == 'X' & temp[2][2] == 'X') ||

            (temp[0][0] == 'X' && temp[1][0] == 'X' & temp[2][0] == 'X') ||
            (temp[0][1] == 'X' && temp[1][1] == 'X' & temp[2][1] == 'X') ||
            (temp[0][2] == 'X' && temp[1][2] == 'X' & temp[2][2] == 'X') ||

            (temp[0][0] == 'X' && temp[1][1] == 'X' & temp[2][2] == 'X') ||
            (temp[0][2] == 'X' && temp[1][1] == 'X' & temp[2][0] == 'X')       
        ) xwins = true;
        if(
            (temp[0][0] == 'O' && temp[0][1] == 'O' & temp[0][2] == 'O') ||
            (temp[1][0] == 'O' && temp[1][1] == 'O' & temp[1][2] == 'O') ||
            (temp[2][0] == 'O' && temp[2][1] == 'O' & temp[2][2] == 'O') ||

            (temp[0][0] == 'O' && temp[1][0] == 'O' & temp[2][0] == 'O') ||
            (temp[0][1] == 'O' && temp[1][1] == 'O' & temp[2][1] == 'O') ||
            (temp[0][2] == 'O' && temp[1][2] == 'O' & temp[2][2] == 'O') ||

            (temp[0][0] == 'O' && temp[1][1] == 'O' & temp[2][2] == 'O') ||
            (temp[0][2] == 'O' && temp[1][1] == 'O' & temp[2][0] == 'O')       
        ) owins = true;

        if(xwins || owins){
            if(xwins && owins){
              cout<<"no"<<endl;
            } else if(xwins) {
                if(o == (x-1)) cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            } else if(owins){
                if(x == o ) cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            } else {
               cout<<"no"<<endl;
            }
        } else if(x == o ||  o == (x-1)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        cin.ignore();
    }
}
