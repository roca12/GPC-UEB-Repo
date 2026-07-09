/*
 * Autor: Las UEBonas
 * Problema: Identificación de Firmas Espectrales
 * Juez online: OmegaUp
 * Veredicto: Accepted
 * URL: https://omegaup.com/arena/CB062026IA/#problems/firmas-espectrales
 */

#include <bits/stdc++.h>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int C, N;
    if(!(cin >> C >> N)){
        return 0;
    }
    
    unordered_map<int, string> q;
    for(int i = 0; i < C; i++){
        int l;
        string nombre;
        cin >> l >> nombre;
        q[l] = nombre;
    }
    
    string sb = "";
    for(int i = 0; i < N; i++){
        int deteccion;
        cin >> deteccion;
        if(q.count(deteccion)){
            sb += q[deteccion];
        } else{
            sb += "Desconocido";
        }
        
        if(i < N - 1){
            sb += " ";
        }
    }
    
    cout << sb << endl;
}
