#include <iostream>

using namespace std;

int main()
{
    long long n;
    string s = "";
    cin >> n;
    while(n > 1)
    {
        s += to_string(n) + " ";
        if(n%2 == 0) n /= 2;
        else n = n*3 + 1;
    }
    s += "1";
    cout << s;
}
