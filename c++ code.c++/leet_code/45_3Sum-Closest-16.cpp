#include <bits/stdc++.h>
using namespace std;

int sumclosest(vector<int> &nums, int target)
{
    /* unordered_map<int, int> res;

     for (int i = 0; i < nums.size(); i++)
     {
         for (int j = 0; j < nums.size(); j++)
         {
             if (i == j)
             {
                 continue;
             }
             int sum = 0;
             int mini = 0;

             for (int k = 0; k < nums.size(); k++)
             {
                 if (i == k || j == k)
                 {
                     continue;
                 }
                 sum = nums[i] + nums[j] + nums[k];
                 mini = abs(sum - target);
                 res[sum] = mini;
             }
         }
             */

    sort(nums.begin(), nums.end());
    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
    }
}
int smallest = INT_MAX;
int closest = 0;

for (auto it : res)
{
    if (it.second < smallest)
    {
        smallest = it.second;
        closest = it.first;
    }
}
return closest;
}

int main()
{
    int n;
    cout << "size:";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "target:";
    cin >> target;

    int ans = sumclosest(nums, target);

    cout << "output:" << ans;

    return 0;
}