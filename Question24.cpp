/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well with point precision.*/
#include <bits/stdc++.h>
using namespace std;

long long int Binary(int sq)
{
    int start = 0;
    int end = sq;
    long long int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        long long square = mid * mid;
        if (square < sq)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (square == sq)
        {
            ans = mid;
            return ans;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double precision(int sq, int square, int precise)
{
    double factor = 1;
    double ans = square;
    for (int i = 0; i < precise; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < sq; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int sq = 37;
    int square = Binary(sq);
    double sr = precision( sq, square, 3);
    cout << "square root of " << sq << " is " << sr;
    return 0;
}