#include <bits/stdc++.h>
using namespace std;

int majorityElements(vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }

    for (auto it : freq)
    {
        if (it.second > arr.size() / 2)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter size:";
    cin >> n;

    cout << "enter array:";
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = majorityElements(arr);

    cout << result;

    return 0;
}