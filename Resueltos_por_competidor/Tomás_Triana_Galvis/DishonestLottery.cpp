#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Dishonest Lottery
 * Juez online: Kattis dishonestlottery
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/dishonestlottery
 **/ 
int main(){
    int n,x;
    vector<int> ans(50,0);
    vector<int> arr;
    cin>>n;
    int a=50*n;
    while(a--){
        cin>>x;
        ans[x-1]++;
    }
    for(int i=0;i<50;i++){
        if(ans[i]>2*n){
            arr.push_back(i+1);
        }
    }
    if(arr.empty()){
        cout<<-1<<"\n";
    }else{
        for(int i=0;i<arr.size();i++){
            if(i == arr.size()-1){
                cout<<arr[i]<<"\n";
            }else{
                cout<<arr[i]<<" ";
            }

        }
    }
    return 0;
}
