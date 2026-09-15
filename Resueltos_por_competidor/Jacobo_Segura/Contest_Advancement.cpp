#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int ContestAdvancement() {

    int n, k, c;
    cin >> n >> k >> c;

    vector<int> team(n);
    vector<int> school(n);

    for (int i = 0; i < n; i++) {
        cin >> team[i] >> school[i];
    }

    unordered_map<int, int> countSchool;
    vector<bool> selected(n, false);

    int total = 0;
    for (int i = 0; i < n && total < k; i++) {

        if (countSchool[school[i]] < c) {
            selected[i] = true;
            countSchool[school[i]]++;
            total++;
        }
    }

    for (int i = 0; i < n && total < k; i++) {
        if (!selected[i]) {
            selected[i] = true;
            total++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (selected[i]) {
            cout << team[i] << '\n';
        }
    }

    return 0;
}
