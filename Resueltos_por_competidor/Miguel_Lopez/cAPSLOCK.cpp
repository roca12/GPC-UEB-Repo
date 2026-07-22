// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
    bool may = false;
    int cont = 0;
    for(int i = 0; i < (int)s.length(); i++) {
        if(islower(s[i])) {
            may = true;
            break;
        }
        else {
            cont++;
        }
    }
    if(cont == (int)s.length()) {
        for(int i = 0; i < (int)s.length(); i++) {
         s[i] = tolower(s[i]);
        }
        cout << s << endl;
    } 
    else {
    int cont2 = 0;
    for(int i = 1; i < (int)s.length(); i++) {
        if(isupper(s[i])) {
            cont2++;
        }
    }
    if(cont2 == (int)s.length() - 1) {
        s[0] = toupper(s[0]);
        for(int i = 1; i < (int)s.length(); i++) {
         s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else {
    cout << s << endl;
    }
    }
}
