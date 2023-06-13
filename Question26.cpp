// TODO:Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S and return the left and right index(1-based indexing) of that sub array.
#include <bits/stdc++.h>
using namespace std;

void Array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " index";
        cin >> arr[i];
    }
}

void sumArray(int arr[], int n, int s, int *c, int *d)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            a += arr[j];
            if (arr[i] + a == s)
            {
                *c = i;
                *d = j;
                break;
            }
        }
        a=0;
    }
}

int main()
{
    int array[100];
    int a, n, c, d;
    cout << "Enter the size of the array";
    cin >> n;
    cout << "Enter the sum you want to sum: ";
    cin >> a;
    Array(array, n);
    sumArray(array, n, a, &c, &d);
    cout<<"Sum can be fulfilled between : "<<c<<" and "<<d<< " array indexes: ";
    return 0;
}