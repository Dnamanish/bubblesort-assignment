#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 2, 7, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int brr[5];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true; // true means arr sorted
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
            if (flag == true)
            {
                break;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (brr[i] != arr[i] && brr[i] != arr[i + 1])
            {
                flag = false;
                break;
            }
        }
        else if (i == n - 1)
        {
            if (brr[i] != arr[i] && brr[i] != arr[i - 1])
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (brr[i] != arr[i] && brr[i] != arr[i + 1] && brr[i] != arr[i - 1])
            {
                flag = false;
                break;
            }
        }
    }
    cout << flag;
}