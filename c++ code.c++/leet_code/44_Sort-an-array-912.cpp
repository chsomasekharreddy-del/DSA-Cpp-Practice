#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void sorting(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = low + (high - low) / 2;
    sorting(arr, low, mid);
    sorting(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

vector<int> sortAnArray(vector<int> &arr)
{
    sorting(arr, 0, arr.size() - 1);

    return arr;
}

int main()
{
    int n;
    cout << "enter size:";
    cin >> n;

    vector<int> arr(n);
    cout << "input:" << " ";

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = sortAnArray(arr);

    cout << "output:";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}