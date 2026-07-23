/*
 * Autor: Juan Martinez
 * Problema: Missing Number
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1083/
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp; cin>>n;
    set<int> numbers;
    for(int i = 0; i < (n-1); i++) cin>>temp, numbers.insert(temp);
    for(int i = 1; i <= n; i++)  {
        if(numbers.count(i) == 0) {
            cout<<i<<endl;
            break;
        }
    }
}
