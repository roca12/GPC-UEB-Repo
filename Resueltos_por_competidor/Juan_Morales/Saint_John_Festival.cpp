/*
 * Autor: OtherSpanish
 * Problema: Saint John Festival
 * Juez online: 
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=4912&mosmsg=Submission+received+with+ID+31261516
 */
 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point
{
    ll x, y;

    bool operator<(const Point& p) const
    {
        return x < p.x || (x == p.x && y < p.y);
    }
    bool operator==(const Point& p) const
    {
        return x == p.x && y == p.y;
    }
};

ll cross(const Point& O, const Point& A, const Point& B)
{
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

vector<Point> convexHull(vector<Point> pts)
{
    sort(pts.begin(), pts.end());
    pts.erase(unique(pts.begin(), pts.end()), pts.end());

    int n = pts.size();
    if (n <= 2) return pts;

    vector<Point> hull(2 * n);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        while (k >= 2 && cross(hull[k - 2], hull[k - 1], pts[i]) <= 0) k--;
        hull[k++] = pts[i];
    }
    int lower = k + 1;
    for (int i = n - 2; i >= 0; i--)
    {
        while (k >= lower && cross(hull[k - 2], hull[k - 1], pts[i]) <= 0) k--;
        hull[k++] = pts[i];
    }
    hull.resize(k - 1);
    return hull;
}

ll triArea2(const Point& a, const Point& b, const Point& c)
{
    return llabs(cross(a, b, c));
}

bool pointInTriangle(const Point& a, const Point& b, const Point& c, const Point& p)
{
    ll s1 = triArea2(a, b, c);
    ll s2 = triArea2(p, a, b) + triArea2(p, b, c) + triArea2(p, c, a);
    return s1 == s2;
}

bool inConvexPolygon(const vector<Point>& hull, const Point& p)
{
    int n = hull.size();
    if (n == 0) return false;
    if (n == 1) return hull[0] == p;
    if (n == 2)
    {
        if (cross(hull[0], hull[1], p) != 0) return false;
        return min(hull[0].x, hull[1].x) <= p.x && p.x <= max(hull[0].x, hull[1].x) &&
               min(hull[0].y, hull[1].y) <= p.y && p.y <= max(hull[0].y, hull[1].y);
    }

    ll c1 = cross(hull[0], hull[1], p);
    ll c2 = cross(hull[0], hull[n - 1], p);
    if (c1 < 0 || c2 > 0) return false;

    if (c1 == 0)
    {
        return min(hull[0].x, hull[1].x) <= p.x && p.x <= max(hull[0].x, hull[1].x) &&
               min(hull[0].y, hull[1].y) <= p.y && p.y <= max(hull[0].y, hull[1].y);
    }
    if (c2 == 0)
    {
        return min(hull[0].x, hull[n - 1].x) <= p.x && p.x <= max(hull[0].x, hull[n - 1].x) &&
               min(hull[0].y, hull[n - 1].y) <= p.y && p.y <= max(hull[0].y, hull[n - 1].y);
    }

    int lo = 1, hi = n - 1;
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;
        if (cross(hull[0], hull[mid], p) >= 0) lo = mid;
        else hi = mid;
    }

    return pointInTriangle(hull[0], hull[lo], hull[hi], p);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll L;
    while (cin >> L)
    {
        vector<Point> big(L);
        for (int i = 0; i < L; i++) cin >> big[i].x >> big[i].y;

        vector<Point> hull = convexHull(big);

        ll S;
        cin >> S;
        ll count = 0;
        for (int i = 0; i < S; i++)
        {
            Point p;
            cin >> p.x >> p.y;
            if (inConvexPolygon(hull, p)) count++;
        }

        cout << count << "\n";
    }

    return 0;
}
