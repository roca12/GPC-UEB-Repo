#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl;
using namespace std;
int main(){
	string s;
	cin>>s;
	string m1,m2;
	m1 = s.substr(0, s.size()/2);
	m2 = s.substr((s.size()/2),s.size()/2);
	int r1 = 0,r2=0;
	for(int i = 0; i<s.size()/2; i++){
		r1+=(m1[i]-'A');
		r2+=(m2[i]-'A');
	}
	string rot1, rot2;
	for(int i = 0; i<s.size()/2; i++){
		rot1+=(((m1[i]-'A')+r1)%26)+'A';
		rot2+=(((m2[i]-'A')+r2)%26)+'A';
	}
	string ans;
	for(int i = 0; i<s.size()/2; i++){
		ans+=((rot1[i]+rot2[i]-2*'A')%26)+'A';
	}
	cout<<ans;
}