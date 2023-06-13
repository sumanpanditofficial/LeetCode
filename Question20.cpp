/*Peak Index in a Mountain Array*/
#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[mid];
}

int main()
{
    int arr[100]{1, 3, 4, 5, 6, 15, 9, 5, 4, 3, 0};
    int max = peak(arr, 11);
    cout << "Max= " << max;
    return 0;
}