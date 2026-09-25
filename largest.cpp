#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n)
{
    int sel = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (sel < arr[i])
            sel = arr[i];
    }
    return sel;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = maximum(arr, n);
    cout << mx;

    delete[] arr;
    return 0;
}