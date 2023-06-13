// Find the pivot element in a rotated array which was sorted before
#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[end];
}

int main()
{
    int arr[100] = {5, 6, 7, 8, 9, 1, 2, 3};
    int pivotElement = pivot(arr, 8);
    cout << "Pivot element: " << pivotElement;
    return 0;
}