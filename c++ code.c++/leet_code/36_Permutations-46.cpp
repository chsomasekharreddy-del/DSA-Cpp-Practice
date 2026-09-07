#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    do
    {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return result;
}

int main()
{
    int n;
    cout << "enter size:";
    cin >> n;

    vector<int> nums(n);

    cout << "enter input:";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> ans = permute(nums);

    cout << "output:";

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}