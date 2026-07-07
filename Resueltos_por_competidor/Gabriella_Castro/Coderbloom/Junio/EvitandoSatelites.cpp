/*
 * Autor: Las UEBonas
 * Problema: Evitando Satélites
 * Juez online: OmegaUp
 * Veredicto: Accepted
 * URL: https://omegaup.com/arena/CB062026IA/#problems/Evitando-Satelites
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct Satelite {
    int inicio, fin;
};

bool comparar(Satelite a, Satelite b) {
    return a.inicio < b.inicio;
}

int main() {
    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<Satelite> lista(N);
    for (int i = 0; i < N; i++) {
        cin >> lista[i].inicio >> lista[i].fin;
    }

    sort(lista.begin(), lista.end(), comparar);
    int tiempoActual = 0;
    bool encontrado = false;

    for (int i = 0; i < N; i++) {
        if (lista[i].inicio - tiempoActual >= K) {
            cout << tiempoActual << "\n";
            encontrado = true;
            break;
        }
        if (lista[i].fin >= tiempoActual) {
            tiempoActual = lista[i].fin + 1;
        }
    }

    if (!encontrado) {
        cout << tiempoActual << "\n";
    }

    return 0;
}
