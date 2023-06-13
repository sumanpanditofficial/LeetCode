// Search an element in an rotated array
#include <bits/stdc++.h>
using namespace std;
int GetPivot(int arr[], int size)
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
    return end;
}

int BinarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[100] = {5, 6, 7, 8, 9, 1, 2, 3};
    int k = 3;
    int found;
    int pivot = GetPivot(arr, 8);
    if (k >= arr[pivot] && k <= arr[7])
    {
        found = BinarySearch(arr, pivot, 7, k);
    }
    else
    {
        found = BinarySearch(arr, 0, pivot - 1, k);
    }
    cout << "Found in " << found << " Index";
    return 0;
}