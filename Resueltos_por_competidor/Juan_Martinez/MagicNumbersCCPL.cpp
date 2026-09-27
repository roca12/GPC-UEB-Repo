/*
 * Autor: Juan Martinez
 * Problema: Magic Numbers
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/G
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)
const int INF = 1e9;

bool check(string s) {
    map<char, int> mapa;
    for(char c: s) {
        mapa[c]++;
        if(mapa[c] > 1) return 1;
    }
    return 0;
}

int main() {
	ll t, n, s1, s2; cin>>t;
    while(t--) {
        cin>>n;
        s1 = n;
        s2 = 1;
        while(true) {
            set<char> se;
            string s, ss2;
            stringstream ss;
            ss<<s1;
            s = ss.str();
            //cout<<s1<<" "<<s2<<ln;
            ss.str("");
            ss<<s2;
            ss2 = ss.str();
            //cout<<ss2<<ln;
            if(s.size() > 10) break;
            if(!check(s) && !check(ss2)) {
                if(s1/s2 == n) cout<<s1<<" / "<<s2<<" = "<<n<<ln;
            }
            s2++;
            s1 = s2 * n;
        }
        if(t >= 1) cout<<ln;
    }

}
