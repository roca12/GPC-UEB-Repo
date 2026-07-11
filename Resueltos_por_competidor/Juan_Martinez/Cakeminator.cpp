/*
 * Autor: EroMergeSort del TCC
 * Problema: Cakeminator 
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/CodeForces-330A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c, con = 0;
    char temp;
    cin >> r >> c;
    bool col[c], row[r];
    bool visited[r][c];

    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            visited[i][j] = false;
            //cout<< visited[i][j]<<" ";
        } 
           // cout<<"\n";
     }
    
    for(int i = 0; i < c; i++) col[i] = false;
     for(int i = 0; i < r; i++) row[i] = false;


    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>temp;
            if(temp == 'S') {
                col[j] = true;
                row[i] = true;
                //cout<< i << " " << j<<endl;
            }
        }
    }


    for(int i = 0; i < c; i++){
        //cout<<col[i]<<endl;
        if(!col[i]){
            for(int j = 0; j < r; j++){
                visited[j][i] = true;
            } 
         }
    }


    for(int i = 0; i < r; i++){
        if(!row[i]){
           for(int j = 0; j < c; j++){
            visited[i][j] = true;
        } 
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(visited[i][j]) con++;
        } 
    }
    
     cout<<con<<endl;
}
