#include <bits/stdc++.h>
using namespace std;
vector<int> selfdrivingnums(int left, int right)
{
    vector<int> result;
    for (int i = left; i <= right; i++)
    {
        int temp = i;
        bool isvalid = true;

        while (temp != 0)
        {
            int last_digit = temp % 10;
            if (last_digit == 0 || i % last_digit != 0)
            {
                isvalid = false;
            }
            temp = temp / 10;
        }
        if (isvalid == true)
            result.push_back(i);
    }
    return result;
}

int main()
{
    int left;
    int right;
    cout << "left:";
    cin >> left;

    cout << "right:";
    cin >> right;

    vector<int> ans = selfdrivingnums(left, right);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}