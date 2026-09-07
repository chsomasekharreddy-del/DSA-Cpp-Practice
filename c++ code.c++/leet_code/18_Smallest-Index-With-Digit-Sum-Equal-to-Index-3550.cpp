#include <bits/stdc++.h>
using namespace std;

int smallestIndex(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        int temp = arr[i];

        while (temp != 0)
        {
            int last_digit = temp % 10;
            sum = sum + last_digit;
            temp = temp / 10;
        }
        if (sum == i)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter your array of size:";
    cin >> n;

    cout << "enter array:";
    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int ans = smallestIndex(arr);

    cout << "output:" << ans;

    return 0;
}