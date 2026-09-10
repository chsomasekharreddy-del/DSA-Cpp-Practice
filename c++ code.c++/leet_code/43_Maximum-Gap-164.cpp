#include <bits/stdc++.h>
using namespace std;

int maximum_gap(vector<int> &nums)
{

    if (nums.size() < 2)
        return 0;
    sort(nums.begin(), nums.end());

    int maxi = INT_MIN;
    int diff = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        diff = nums[i] - nums[i - 1];
        maxi = max(maxi, diff);
    }
    return maxi;
}

int main()
{
    int n;
    cout << "enter size:" << endl;
    cin >> n;

    vector<int> nums(n);
    cout << "enter array:";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int ans = maximum_gap(nums);

    cout << "output:" << ans;

    return 0;
}