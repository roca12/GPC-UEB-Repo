/*
 * Autor: Juan Diego González Villarreal
 * Problema: Repetitions
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https://cses.fi/problemset/task/1069
 */
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	string s;
 	cin>>s;
 	int mx = 0;
 	int cnt = 1;
 	char prev = s[0];
 	for(int i = 1; i<s.size();i++){
 		if(s[i]==prev)cnt++;
 		else mx = max(mx,cnt), cnt = 1, prev = s[i];
 	}
 	cout<<max(mx,cnt)<<endl;
 }