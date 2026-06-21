#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X,H,R;
	cin>>X>>H;
	while(X!=4){
	    R++;
	    X=X-1;
	}
	R = R*24;
	R = R+H;
	cout<<R;

}
