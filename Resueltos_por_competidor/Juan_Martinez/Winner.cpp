/*
 * Autor: Juan Martinez
 * Problema: Winner (2A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2/A
 * Difficulty: 1500
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, score; cin>>n;
    string name;
    unordered_map<string, int> players;
    vector<pair<string, int>> history;
    set<string> winners;
    while(n--){
        cin>>name>>score;
        players[name] += score;
        history.push_back({name, score});
    }
    string s; int maxi = -100000000001;
    for(auto [nam, sco] : players){
        if(sco > maxi && sco > -1) maxi = sco, s = nam;
    }
    for(auto [nam, sco] : players){
        if(sco == maxi) winners.insert(nam);
    }
    if(winners.size() > 1){
        players.clear();
        for(auto i : history) {
            players[i.first] += i.second;
            if(players[i.first] >= maxi && winners.count(i.first) == 1) {
                cout<<i.first<<endl;
                break;
            }
        }
    }
    else cout<<s<<endl;
    
}

