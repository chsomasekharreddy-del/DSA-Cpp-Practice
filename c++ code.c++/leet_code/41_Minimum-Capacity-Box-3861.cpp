#include <bits/stdc++.h>
using namespace std;

int minimum(vector<int> &arr, int itemsize)
{

    int mini = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= itemsize && arr[i] < mini)
        {
            mini = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int n;
    cout << "enter size:";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int itemsize;
    cout << "itemSize:";
    cin >> itemsize;

    int ans = minimum(arr, itemsize);

    cout << "output:" << ans;

    return 0;
}