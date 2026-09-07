#include <bits/stdc++.h>
using namespace std;

vector<int> distribute(vector<int> &nums)
{
    vector<int> arrOne;
    vector<int> arrTwo;

    arrOne.push_back(nums[0]);
    arrTwo.push_back(nums[1]);

    int i = 2;

    while (i < nums.size())
    {
        if (arrOne.back() > arrTwo.back())
        {
            arrOne.push_back(nums[i]);
        }
        else
        {
            arrTwo.push_back(nums[i]);
        }
        i++;
    }

    vector<int> newArray;

    for (int i = 0; i < arrOne.size(); i++)
    {
        newArray.push_back(arrOne[i]);
    }

    for (int i = 0; i < arrTwo.size(); i++)
    {
        newArray.push_back(arrTwo[i]);
    }

    return newArray;
}

int main()
{
    int n;

    cout << "enter size:";

    cin >> n;

    vector<int> nums(n);
    for (auto &it : nums)
        cin >> it;

    vector<int> ans = distribute(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}