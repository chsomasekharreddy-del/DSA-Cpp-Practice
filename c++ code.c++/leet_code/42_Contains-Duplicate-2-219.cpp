#include <bits/stdc++.h>
using namespace std;

bool ContainDuplicates(vector<int> &nums, int k)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < nums.size(); i++)
    {
        if (freq.find(nums[i]) != freq.end())
        {
            if (i - freq[nums[i]] <= k)
            {
                return true;
            }
        }
        freq[nums[i]] = i;
    }
    return false;
}

int main()
{
    int n;
    cout << "enter size:";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "k:";
    cin >> k;

    bool ans = ContainDuplicates(nums, k);

    cout << "output:" << boolalpha << ans;

    return 0;
}