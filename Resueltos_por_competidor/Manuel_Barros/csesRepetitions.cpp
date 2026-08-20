#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int maxValue = 1;
    int actualValue = 1;

    for(unsigned int i = 1; i < s.length(); i++)
    {
        if(s[i-1] == s[i])
        {
            actualValue++;
        }
        else
        {
            actualValue = 1;
        }
        maxValue = actualValue >= maxValue?actualValue:maxValue;
    }

    cout << maxValue;
}
