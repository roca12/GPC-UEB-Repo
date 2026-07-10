#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> l,r;              // l = quiere ir dir 0, r = dir 1
    for(int i=0;i<n;i++){
        int t,d;
        cin>>t>>d;
        if(d==0) l.push(t);
        else     r.push(t);
    }

    long long end=0, ans=0, waiting=0;
    int dir=-1;                 

    while(!l.empty() || !r.empty() || dir!=-1){
        long long na = LLONG_MAX;
        int who = -1;            
        if(!l.empty() && l.front() < na){ na = l.front(); who = 0; }
        if(!r.empty() && r.front() < na){ na = r.front(); who = 1; }

        if(dir==-1){                          
            dir = who; end = na + 10;
            if(who==0) l.pop(); else r.pop();
        }
        else if(who!=-1 && na < end){         
            if(who==dir) end = max(end, na+10);   
            else         waiting++;               
            if(who==0) l.pop(); else r.pop();
        }
        else{                                
            if(waiting>0){                    
                dir = 1-dir; end += 10; waiting = 0;
            } else {                          
                ans = end; dir = -1;
            }
        }
    }

    cout<<ans<<endl;
}