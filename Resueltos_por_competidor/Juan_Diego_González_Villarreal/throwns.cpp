#include<bits/stdc++.h>
using namespace std;

int mod(int a, int b){
	return ((a%b)+b)%b;
}

int main(){
	int n,k,num;
	cin>>n>>k;
	stack<int> st;
	st.push(0);
	for(int i = 0; i<k; i++){
		string s;
		cin>>s;
		if(s=="undo"){
			cin>>num;
			while(num--)st.pop();
		}else{
			num = stoi(s);
			st.push(mod(st.top()+num, n));
		}
	}
	cout<<st.top();
	
}