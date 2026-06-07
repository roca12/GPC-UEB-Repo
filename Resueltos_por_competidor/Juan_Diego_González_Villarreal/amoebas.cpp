#include<bits/stdc++.h>
#define pii pair<int,int>
#define mp make_pair
#define p push
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
using namespace std;

vector<pii> dirs = {
	mp(1,0),
	mp(0,1),
	mp(-1,0),
	mp(0,-1),
	mp(1,-1),
	mp(-1,1),
	mp(1,1),
	mp(-1,-1)
};
 

int main(){
	int n,m,cnt = 0;
	cin>>n>>m;
	char brd[n][m];
	bool vis[n][m];
	cin.ignore();
	for(int i = 0;i<n;i++){
		string s;
		getline(cin,s);
		for(int j = 0;j<m;j++){
			brd[i][j]=s[j];
			vis[i][j]=false;	
		}		
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(brd[i][j]=='#'&&!vis[i][j]){
				cnt++;
				stack<pii> st;
				st.p(mp(i,j));
				while(!st.empty()){
					pii crr = st.top();
					st.pop();
					vis[crr.first][crr.second] = true;
					for(pii &d: dirs){
						pii tmp = mp(
							crr.first+d.first,
							crr.second+d.second
						);
						bool valid = (
							tmp.first>=0 && tmp.first<n
							&& tmp.second>=0 && tmp.second<m
							&& !vis[tmp.first][tmp.second]
							&& brd[tmp.first][tmp.second]=='#'
						);
						if(valid) st.p(tmp);
					}
				}
			}else vis[i][j]=true;
		}
	}
	cout<<cnt;
}