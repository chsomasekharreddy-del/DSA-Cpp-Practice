#include <bits/stdc++.h>
using namespace std;
// wrong code i will check it later
// not wromg check once note one line written you check means you got idea frm that
void dosomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "value of fuction:" << arr[0] << endl;
}

int main()
{
    int n = 2;
    int arr[n];
    for (int i = 0; i < n; i += 1)
    {
        cin >> arr[i];
    }
    dosomething(arr, n);
    

    return 0;
}