#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<"\n"
using namespace std;

vector<string> updateBoard(int x, int y, vector<string> brd){
    brd[y] = "********";
    int b1 = y-x, b2 = y+x;
    for(int i = 0; i<8; i++){
        brd[i][x]='*';
        if(i+b1<8 && i+b1>=0) brd[i+b1][i]='*';
        if(b2-i>=0 &&  b2-i<8 ) brd[b2-i][i]='*';
    }
    return brd;
}

int solve(int i, vector<string> brd){
    if(i==8) return 1;
    int cnt = 0;
    for(int j = 0;j<8; j++){
        if(brd[j][i]!='*'){
            cnt+=solve(i+1, updateBoard(i,j,brd));
        }
    }
    return cnt;
}

int main(){
    vector<string> brd(8);
    for(int i = 0; i<8; i++){
        cin>>brd[i];
    }
    cout<<solve(0, brd);
}