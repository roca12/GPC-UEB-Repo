#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 1;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else if (n == 4)
    {
        cout << "2 4 1 3";
    }
    else if (n == 5)
    {
        cout << "5 2 4 1 3";
    }
    else
    {
        int a = (n - (n%2))/2;
        string s = "";
        for(int i = 1; i <= a; i++)
        {
            s += to_string(i) + " " + to_string(a+i) + " ";
        }
        if(n % 2 == 1) s = to_string(n)+" " + s;
        cout << s;
    }
}
