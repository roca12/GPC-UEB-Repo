/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: Blocked Bilboard
* Juez: USACO
* Veredicto: Accepted
* URL: https://usaco.org/index.php?page=viewproblem2&cpid=759
*/

#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
#define vvi vector<vi>
#define mpii map<int,int>
#define mpis map<int,string>
#define mpsi map<string,i>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define DBGARR(a, n) { cerr << #a << " = [ "; for (int i = 0; i < (n); i++) cerr << (a)[i] << " "; cerr << "]" << endl; }
typedef long long ll;
typedef double long dl;
using namespace std;

int area(vi &r1){
    return abs(r1[0]-r1[2])*abs(r1[1]-r1[3]);
}

int interArea(vi &r1,vi &r2){
    int x1,y1,x2,y2;
    bool inters = !(
        r1[2]<r2[0] || r2[2]<r1[0] ||
        r1[3]<r2[1] || r2[3]<r1[1]
    );
    if(!inters) return 0;
    x1 = max(r1[0],r2[0]);
    x2 = min(r1[2],r2[2]);
    y1 = max(r1[1],r2[1]);
    y2 = min(r1[3],r2[3]);
    vi tmp(4); 
    tmp = {x1,y1,x2,y2};
    return area(tmp);
}

int main(){
    freopen("billboard.in","r", stdin);
    freopen("billboard.out", "w", stdout);
    vi r1(4),r2(4),r3(4);
    cin>>r1[0]>>r1[1]>>r1[2]>>r1[3];
    cin>>r2[0]>>r2[1]>>r2[2]>>r2[3];
    cin>>r3[0]>>r3[1]>>r3[2]>>r3[3];
    int area1 = area(r1),area2=area(r2);
    int ints1 = interArea(r1,r3),ints2 =interArea(r2,r3);
    cout<<area1+area2-ints1-ints2;
}