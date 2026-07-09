#include <bits/stdc++.h>
using namespace std;

int main(){
    string M, N;
    cin >> M >> N;

    vector<int> starM, starN;
    for(int i = 0; i < (int)M.size(); i++) if(M[i]=='*') starM.push_back(i);
    for(int i = 0; i < (int)N.size(); i++) if(N[i]=='*') starN.push_back(i);

    int aM = starM.size(), aN = starN.size();

    for(int nm = 0; nm < (1<<aN); nm++){
        string Ncur = N;
        for(int k = 0; k < aN; k++)
            Ncur[starN[k]] = ((nm>>k)&1) ? '1' : '0';

        long long Nval = 0;
        for(char c : Ncur) Nval = Nval*2 + (c-'0');

        for(int mm = 0; mm < (1<<aM); mm++){
            string Mcur = M;
            for(int k = 0; k < aM; k++)
                Mcur[starM[k]] = ((mm>>k)&1) ? '1' : '0';

            long long r = 0;
            for(char c : Mcur) r = (r*2 + (c-'0')) % Nval;

            if(r == 0){
                cout << Mcur << '\n';
                return 0;
            }
        }
    }
    return 0;
}