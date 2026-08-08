#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

pair<ll,ll> SplittingNumbers(ll n) {
    bitset<32> number(n);
    bitset<32> a(0);
    bitset<32> b(0);

    bool isEven = true;
    for (int i = 0; i < 32; ++i) {
        if (number[i] == 0) {
            continue;
        }

        if (isEven) {
            a[i] = 1;
            isEven = !isEven;
        } else {
            b[i] = 1;
            isEven = !isEven;
        }

    }

  return {a.to_ullong(), b.to_ullong()};
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll input;
    cin >> input;

    while (input != 0) {
        pair<ll, ll> res = SplittingNumbers(input);
        cout<<res.first<<" "<<res.second<<endl;
        cin>>input;
    }


    return 0;
}
