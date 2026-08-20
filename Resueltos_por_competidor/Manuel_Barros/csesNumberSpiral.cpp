#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++)
    {
        ll y, x;
        cin >> y >> x;
        if(x==y)
        {
            ll xValue = (x + x%2 - 1)*(x + x%2 - 1)+ 1 - x%2;
            ll yValue = (y - y%2)*(y - y%2)+ y%2;
            cout << (xValue+yValue)/2 << "\n";
        }
        else if(x>y)
        {
            ll xValue = (x + x%2 - 1)*(x + x%2 - 1)+ 1 - x%2;
            cout << ((x%2 == 1)?(xValue - (y-1)): (xValue + (y-1))) << "\n";
        }
        else
        {
            ll yValue = (y - y%2)*(y - y%2)+ y%2;
            cout << ((y%2 == 1)?(yValue + (x-1)):(yValue - (x-1))) << "\n";
        }
    }
}
