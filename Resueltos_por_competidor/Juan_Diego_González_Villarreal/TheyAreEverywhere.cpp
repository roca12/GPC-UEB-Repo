/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: They are Everywhere
* Juez Online: Codeforces
* Veredicto: Accepted 
* URL: https://codeforces.com/problemset/problem/701/C
* Rating: 1500
*/

#include<bits/stdc++.h>
typedef long long ll;
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define mp make_pair
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(),v.end()
#define um unordered_map
#define mm multimap
#define ms multiset
#define in insert
#define ln "\n"
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   //freopen("file.in", "r", stdin);
   //freopen("file.out", "w", stdout);
   int n;
   string s;
   cin>>n>>s;
   set<char> distinct;
   for(char c:s)distinct.in(c);
    int l = 0, ans = 1e5+1;
    map<char, int> m;
    for(int r = 0; r<n; r++){
        if(m.find(s[r])==m.end()){
            m.in(mp(s[r],1));
        }else{
            m[s[r]]++;
        }
        while(m.size()==distinct.size()){
            ans = min(r-l+1,ans);
            m[s[l]]--;
            if(m[s[l]]==0) m.erase(m.find(s[l]));
            l++;
        }
        if(ans == distinct.size())break;
    }
    cout<<ans;
}