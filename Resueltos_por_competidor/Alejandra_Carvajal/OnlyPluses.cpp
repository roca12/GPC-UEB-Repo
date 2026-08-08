/* Autor: Alejandra Carvajal
* Problema: Only pluses
* Juez online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/1992/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >>t;
    for(int i=0; i<t;i++){
        int a,b,c; cin >>a >>b >>c;
        vector<int> banana;
        banana.push_back(a);
        banana.push_back(b);
        banana.push_back(c);

        int sum = 5;
        while(sum--){
            sort(banana.begin(), banana.end());
            banana[0]++;
        }
        int m = 1;
        for (int i: banana){
            m *= i;
        }
        cout << m << endl;

    }

    return 0;
}
