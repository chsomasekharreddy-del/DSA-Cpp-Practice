#include <bits/stdc++.h>
using namespace std;

bool HappyNumbers(int n)
{
    unordered_set<int> ans;

    while (n != 1)
    {
        if (ans.count(n))
        {
            return false;
        }
        ans.insert(n);

        int temp = n;
        int sum = 0;

        while (temp != 0)
        {
            int last_digit = temp % 10;
            sum = sum + last_digit * last_digit;
            temp = temp / 10;
        }
        n = sum;
    }
    return true;
}

int main()
{
    int n;
    cout << "Input:";
    cin >> n;

    bool ans = HappyNumbers(n);

    cout << "output:" << ans;

    return 0;
}