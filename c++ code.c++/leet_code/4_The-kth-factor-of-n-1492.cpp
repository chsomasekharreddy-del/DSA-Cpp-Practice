#include <bits/stdc++.h>
using namespace std;

int kfactorofn(int n, int k)
{
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            result.push_back(i);
        }
    }
    if (k > result.size())
        return -1;

    return result[k - 1];
}

int main()
{
    int n;
    int k;
    cout << "enter n:";
    cin >> n;

    cout << "enter k value:";
    cin >> k;

    int ans = kfactorofn(n, k);

    cout << ans;
}