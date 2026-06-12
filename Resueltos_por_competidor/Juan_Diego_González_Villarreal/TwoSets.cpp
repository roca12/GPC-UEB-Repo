/*
 * Autor: Juan Diego González Villarreal
 * Problema: TwoSets
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https:https://cses.fi/problemset/task/1092
 */
#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
typedef long long ll;
using namespace std;

int main(){
	ll n; 
	cin>>n;
	ll total = n*(n+1)/2;
	if(total%2!=0){
		cout<<"NO";
		return 0;
	}
	cout<<"YES\n";
	set<int> s1,s2;
	ll sum = 0,trgt = total/2;
	for(int i = n; i>0;i--){
		if(sum+i<=trgt){
			sum+=i;
			s1.insert(i);
		}else s2.insert(i);
	}
	cout<<s1.size()<<"\n";
	for(int num:s1)cout<<num<<" ";
	cout<<"\n"<<s2.size()<<"\n";
	for(int num:s2)cout<<num<<" ";
}