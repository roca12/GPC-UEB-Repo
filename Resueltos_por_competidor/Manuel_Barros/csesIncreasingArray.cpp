#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long moves = 0;
    long long lastX;
    cin >> lastX;
    for(int i = 0; i < n-1; i++)
    {
        long long x;
        cin >> x;
        if(lastX > x)
        {
            moves += lastX-x;
        }
        else
        {
            lastX = x;
        }
    }
    cout << moves;
}
