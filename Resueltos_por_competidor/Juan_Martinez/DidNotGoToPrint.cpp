#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
typedef long long int ll;

int main() {
	int t; cin>>t;
    int n;
    string s;
    while(t--) {
        cin>>n;
        cin>>s;
        stack<int> st;
        vector<int> res;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') st.push((i+1));
            else if(s[i] == '2') {
            if(st.size() != 0) {
                st.pop();
                res.push_back((i+1));
            }
            }
        }
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        } 
        sort(res.begin(), res.end());
        cout<<res.size()<<ln;
        for(int i: res) cout<<i<<" ";
        cout<<ln;
    }
}
