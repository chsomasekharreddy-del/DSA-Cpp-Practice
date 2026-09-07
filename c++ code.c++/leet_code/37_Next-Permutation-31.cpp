#include <bits/stdc++.h>
using namespace std;

void permute(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end());
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

    permute(nums);

    cout << "output:";

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}