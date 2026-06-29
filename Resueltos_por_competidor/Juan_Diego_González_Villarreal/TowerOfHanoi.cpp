#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int paso = 0;
string ans;

void hanoi(int n, int from, int temp, int to){
    if(n==0) return;
    hanoi(n-1, from, to, temp);
    ans+=to_string(from)+" "+to_string(to)+"\n";
    paso++;
    hanoi(n-1, temp, from, to);
}

int main(){
    int n;
    cin>>n;
    hanoi(n,1,2,3);
    cout<<paso<<"\n"<<ans;
    return 0;
}