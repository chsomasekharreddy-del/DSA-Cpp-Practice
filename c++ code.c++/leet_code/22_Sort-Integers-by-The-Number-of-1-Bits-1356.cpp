#include <bits/stdc++.h>
using namespace std;

vector<int> sortBitsOfNums(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            int bits1 = __builtin_popcount(arr[j]);
            int bits2 = __builtin_popcount(arr[j + 1]);
            if (bits1 > bits2 || bits1 == bits2 && arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    cout << "enter your size:";

    cin >> n;

    cout << "enter your array:";

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = sortBitsOfNums(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
