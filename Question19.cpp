/*First and Last Position of an Element In Sorted Array */
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int main()
{
    int arr[100] = {1, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 9, 15, 20, 56, 78};
    int firstOc = firstOcc(arr, 16, 7);
    int lastOc = lastOcc(arr, 16, 7);
    cout << "First= " << firstOc << " Last= " << lastOc << endl;
    return 0;
}
