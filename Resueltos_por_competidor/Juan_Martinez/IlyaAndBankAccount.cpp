/*
 * Autor: Juan Martinez
 * Problema: Ilya and Bank Account (313A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/313/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
    char temp;
    int num, num1, num2;
    num = stoi(s);
    temp = s[s.size()-1];
    s.pop_back();
    num1 = stoi(s);
    s.pop_back();
    s.push_back(temp);
    num2 = stoi(s);
    cout<<max(max(num1, num2), num)<<endl;
}
