#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> traductor;
    int d, w;
    cin >> d >> w;
    for(int i = 0; i < d; i++)
    {
        int n, e;
        cin >> n >> e;
        traductor[n] = e;
    }
    for(int i = 0; i < w; i++)
    {
        int a;
        cin >> a;
        if(traductor.count(a) > 0)
        {
            cout << traductor[a] << '\n';
        }
        else
        {
            cout << "C?\n";
        }
    }
    return 0;
}
