#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &nums)
{
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] < 9)
        {
            nums[i]++;
            return nums;
        }

        nums[i] = 0;
    }
    nums.insert(nums.begin(), 1);
    return nums;
}

int main()
{
    int n;
    cout << "enter an array:";

    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = plusOne(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}