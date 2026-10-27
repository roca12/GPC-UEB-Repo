#include <bits/stdc++.h>

using namespace std;

int main() {
    // Redirigir la entrada y salida a los archivos correspondientes
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int onTaLaBola;
    cin >> onTaLaBola;
    for (int i = 0; i < 3; i++) {
        int a;
        int b;
        cin >> a;
        cin >> b;

        if (a == onTaLaBola) {
            onTaLaBola = b;
        } else if (b == onTaLaBola) {
            onTaLaBola = a;
        } else {
            continue;
        }
    }
    cout << onTaLaBola << endl;
    return 0;
}
