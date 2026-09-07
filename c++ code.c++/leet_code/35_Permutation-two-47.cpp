#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permutation(vector<int> &nums)
{
    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

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

    cout << "input:";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> result = permutation(nums);

    cout << "output:";

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}