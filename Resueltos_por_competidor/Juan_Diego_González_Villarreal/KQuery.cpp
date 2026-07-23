#include <bits/stdc++.h>
using namespace std;

// Tipos de evento sobre la recta.
// Se ordenan por coordenada; en empates decidimos el orden con 'tipo'.
struct Event {
    long long x;    // posición sobre la recta
    int type;       // 0 = abre intervalo, 1 = consulta, 2 = cierra intervalo
    int id;         // identificador del intervalo o de la consulta
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<Event> events;
    events.reserve(2 * n + q);

    for (int i = 0; i < n; i++) {
        long long l, r;
        cin >> l >> r;
        events.push_back({l, 0, i});   
        events.push_back({r, 2, i});   
    }

    vector<long long> queryPos(q);
    vector<int> answer(q, 0);
    for (int i = 0; i < q; i++) {
        cin >> queryPos[i];
        events.push_back({queryPos[i], 1, i});
    }


    sort(events.begin(), events.end(), [](const Event& a, const Event& b){
        if (a.x != b.x) return a.x < b.x;
        return a.type < b.type;
    });

    int activeCount = 0;
    set<int> activeIds;  

    for (const Event& e : events) {
        if (e.type == 0) {                
            activeCount++;
            activeIds.insert(e.id);
        } else if (e.type == 2) {          
            activeCount--;
            activeIds.erase(e.id);
        } else {                           
            answer[e.id] = activeCount;    
        }
    }

    for (int i = 0; i < q; i++) cout << answer[i] << "\n";
    return 0;
}