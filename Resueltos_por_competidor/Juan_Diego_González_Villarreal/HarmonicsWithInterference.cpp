#include <bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
typedef long long ll;
using namespace std;

template <size_t B>
bitset<B> bitsetAdd(bitset<B> a, bitset<B> b){
    while(b.any()){
        bitset<B> acarreo = (a & b) << 1;
        a = a ^ b;
        b = acarreo;
    }
    return a;
}

template <size_t B>
int comparar(bitset<B> &a, bitset<B> &b){
    for (int i = static_cast<int>(B) - 1; i >= 0; --i) {
        if (a[i] != b[i]) return a[i] ? 1 : -1;
    }
    return 0;
}

int main()
{
    string n1, n2;
    cin >> n1 >> n2;

    int astCnt = 0;
    bitset<500> hi;
    bitset<16> lo;

    for(int i = 0; i < n1.size(); i++) hi.set(i);

    for(int i = 0; i < n2.size(); i++){
        if(n2[n2.size()-i-1] == '*') { astCnt++; lo.reset(i); }
        else lo.set(i);
    }

    int tmp = 1 << astCnt;
    for(int i = 0; i < tmp; i++){
        bitset<500> loWide(lo.to_ullong());
        bitset<500> val = bitsetAdd(loWide, bitset<500>(1));
        bitset<500> ini = val;

        while(comparar(val, hi) <= 0){
            bool flag = true;
            for(int j = 0; j < n1.size(); j++){
                if(n1[n1.size()-1-j] == '1' && !val[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                for(int j = 0; j < n1.size(); j++)
                    cout << val[n1.size()-1-j];
                cout << '\n';
                return 0;
            } else {
                val = bitsetAdd(val, ini);
            }
        }
    }
}