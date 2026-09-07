#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findingPairs(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (ans.empty() || arr[i][0] > ans.back()[1])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "enter start: ";
    cin >> n;

    cout << "enter end: ";
    cin >> m;

    cout << "Enter array: " << endl;

    vector<vector<int>>
        arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> result = findingPairs(arr);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
    }
    return 0;
}