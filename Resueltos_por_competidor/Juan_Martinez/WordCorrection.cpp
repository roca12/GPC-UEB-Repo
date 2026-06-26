/*
 * Autor: Juan Martinez
 * Problema: Word Correction (938A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/938/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    set<char> vo;
    vo.insert('a');
    vo.insert('e');
    vo.insert('i');
    vo.insert('o');
    vo.insert('u');
    vo.insert('y');
    vector<char> s;
    string temp;

    scanf("%d", &n);
    cin>>temp;
    for(int i = 0 ; i < n; i++) s.push_back(temp[i]);
    bool con = true;
    while(con){
        for(int i = 0; i < n; i++){
            if(i == (n-1)) {
               con = false;
            } else {
                if(vo.count(s[i]) == 1 && vo.count(s[i+1]) == 1) {
                    n--;
                    s.erase(s.begin() + i + 1);
                    break;
                }
            }
        }
    }
    stringstream ss;
    for(int i = 0; i < n; i++) ss<<s[i];
    temp = ss.str();
    cout<<temp<<endl;
    return 0;
}
