#include <bits/stdc++.h>
using namespace std;

int findslargest(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int largest = arr[arr.size() - 1];

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            return arr[i];
        }
    }
    return -1;
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

    int ans = findslargest(arr);

    if (ans == -1)
    {
        cout << "Not Applicable";
    }
    else
    {
        cout << ans;
    }

    return 0;
}