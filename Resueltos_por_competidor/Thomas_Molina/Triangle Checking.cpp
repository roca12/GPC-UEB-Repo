#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A;
	cin>>A;
	int B;
	cin>>B;
	int C;
	cin>>C;
	if (A+B>C&&B+C>A&&A+C>B){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
}
