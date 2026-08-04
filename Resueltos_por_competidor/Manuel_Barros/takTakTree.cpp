#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int dias;
    cin >> a;
    if(a%11 == 1)
    {
        dias = 0;
    }
    else if(a%11 == 6)
    {
        dias = 1;
    }
    else if(a%11 == 3)
    {
        dias = 2;
    }
    else if(a%11 == 7)
    {
        dias = 3;
    }
    else if(a%11 == 9)
    {
        dias = 4;
    }
    else if(a%11 == 10)
    {
        dias = 5;
    }
    else if(a%11 == 5)
    {
        dias = 6;
    }
    else if(a%11 == 8)
    {
        dias = 7;
    }
    else if(a%11 == 4)
    {
        dias = 8;
    }
    else if(a%11 == 2)
    {
        dias = 9;
    }
    cout << dias << " " << (long long)(pow(2, dias)*a);
    return 0;
}
