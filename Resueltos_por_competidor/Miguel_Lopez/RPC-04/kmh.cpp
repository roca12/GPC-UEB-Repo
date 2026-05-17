#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    int a = 0, b = 0;

    for(int i = 0; i < n ; i++){
        string c; cin >> c;

        if(c == "/"){
            a = b;
        } else {
            int d = stoi(c);
            a = d;
            int r = d % 10;
            int y = 0;
            if(r != 0){
                y = 10 - r;
            } else {
                y = 10;
            }
            int x = d + y;
            if(x > b){
                b = x;
            }
        }

        cout << a << "\n";
    }

    return 0;
}
