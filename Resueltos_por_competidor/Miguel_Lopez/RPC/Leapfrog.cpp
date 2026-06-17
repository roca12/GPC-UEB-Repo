/*
 * Autor: Miguel Lopez
 * Problema: 	Leapfrog Encryption 
 * Juez online: RPC
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/QOJ-9759
 */

int main() {
    string t2, l, t; cin >> t2 >> l;
    cin.ignore();
    getline(cin, t);

    int n = l.size();
    int d[10000];
    for(int i = 0; i < n; i++) {
        d[i] = (l[i] - 'a'+2);
    }
    string res;
    if(t2 == "E") {
        for(int i = 0; i < t.size() ; i++) {
            char c = t[i];
            if(isalpha(c)) {
                res+=tolower(c);
            }
        }
    }
    else {
        res = t;
    }
    int lon = res.size();
    int ore[10001];
    bool oc[10001];
    for(int i = 0; i < lon; i++) {
        oc[i] = false;
    }
    int col = 0;
    bool izq = true;
    for(int pas = 0; pas <= n; pas++) {
        if(col >= lon){
            break;
        }
        int salt;
        if(pas < n) {
            salt = d[pas];
        }
        else {
            salt = 1;
        }
        if(pas == 0) {
            int pos = salt-1;
            while(pos < lon && col < lon) {
                ore[col] = pos;
                oc[pos] = true;
                col++;
                pos = pos+salt;
            }
            izq = false;
        }
        else {
            int cont = 0;
            int pos;
            int dirr;
            if(izq) {
                pos = 0;
                dirr = 1;
            }
            else {
                pos = lon -1;
                dirr = -1;
            }
            while(col < lon) {
                while(pos >= 0 && pos<lon &&oc[pos] == true) {
                    pos = pos+dirr;
                }
                if(pos < 0 || pos >= lon) {
                    break;
                }
                cont = cont+1;
                if(cont == salt) {
                    ore[col] = pos;
                    oc[pos] = true;
                    col = col+1;
                    cont = 0;
                    if(col >= lon) {
                        break;
                    }
                 pos = pos+dirr;
                 }
                    else {
                    pos = pos+dirr;
                    }
                }
                izq = !izq;
                }
            }
        string res2(lon, 'a');
        if(t2 == "E") {
            for(int i = 0; i < lon; i++) {
                res2[ore[i]] = res[i];
            }
        }
        else {
            for(int i = 0; i < lon ; i++) {
                res2[i] = res[ore[i]];
            }
        }
        cout << res2 << endl;
    return 0;
    }


