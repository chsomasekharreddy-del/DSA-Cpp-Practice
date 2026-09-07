#include <bits/stdc++.h>
using namespace std;

int sumMultiples(int n)
{
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            result.push_back(i);

        if (i % 5 == 0)
            result.push_back(i);

        if (i % 7 == 0)
            result.push_back(i);
    }

    int sum = 0;
    for (int i = 0; i < result.size(); i++)
    {
        sum = sum + result[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "enter your num:";
    cin >> n;

    int ans = sumMultiples(n);

    cout << ans;

    return 0;
}