#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Balanced Shuffle (Easy)
 * Juez online: Codeforces1970A1
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1970/A1
 **/ 
bool comp(tuple<int,int,char>& a, tuple<int,int,char>& b){
    return tie(get<0>(a),get<1>(b))<tie(get<0>(b),get<1>(a));

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    int cont = 0;
    cin>>a;
    vector<tuple<int,int,char>> arr(a.size());

    get<0>(arr[0])= cont;
    for(int i =0;i<a.size();i++){
        get<2>(arr[i])  = a[i];
        get<1>(arr[i]) = i;
    }
    for(int i =1;i<a.size();i++){
        if(a[i-1]=='('){
            cont=1;
        }else{
            cont=-1;
        }
        get<0>(arr[i]) = get<0>(arr[i-1])+cont;
    }
    sort(arr.begin(),arr.end(),comp);
    for(int i =0;i<arr.size();i++){
        cout<<get<2>(arr[i]);
    }
    cout<<"\n";
    return 0;
}
