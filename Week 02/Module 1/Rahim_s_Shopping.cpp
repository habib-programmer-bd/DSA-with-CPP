#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int flag = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (k >= arr[i])
        {
            max = arr[i];
        }
        else if (k < arr[0])
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "-1";
    }
    else
    {
        cout << max;
    }

    return 0;
}