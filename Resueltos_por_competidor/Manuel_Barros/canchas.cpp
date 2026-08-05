#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int a = abs(x1-x2)*abs(y1-y2)+ abs(x3-x4)*abs(y3-y4);

    int c1xMax = (x1>=x2)?x1:x2;
    int c1xMin = (x1>=x2)?x2:x1;
    int c1yMax = (y1>=y2)?y1:y2;
    int c1yMin = (y1>=y2)?y2:y1;
    int c2xMax = (x3>=x4)?x3:x4;
    int c2xMin = (x3>=x4)?x4:x3;
    int c2yMax = (y3>=y4)?y3:y4;
    int c2yMin = (y3>=y4)?y4:y3;

    if(c1xMin < c2xMax && c1xMax > c2xMin && c1yMin < c2yMax && c1yMax > c2yMin)
    {
        int interX = min(c1xMax, c2xMax) - max(c1xMin, c2xMin);
        int interY = min(c1yMax, c2yMax) - max(c1yMin, c2yMin);
        a -= interX*interY;
    }

    cout << a;
    return 0;
}
