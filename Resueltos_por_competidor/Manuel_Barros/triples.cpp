#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<int> multiplos;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(x%3 == 0)
        {
            multiplos.push_back(i);
        }
    }
    if(multiplos.empty())
    {
        cout << "No hay triples.";
    }
    else
    {
        cout << multiplos.size() << '\n';
        for(unsigned int i = 0; i < multiplos.size(); i++)
        {
            cout << multiplos[i] << " ";
        }
    }

}
