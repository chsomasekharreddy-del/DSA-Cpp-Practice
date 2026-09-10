#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;

    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;

            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
        return true;

    return false;
}

int binaryNumsOfPrimeCount(int left, int right)
{
    int freq = 0;
    for (int i = left; i <= right; i++)
    {
        int bitcnt = __builtin_popcount(i);

        if (isPrime(bitcnt))
        {
            freq++;
        }
    }
    return freq;
}

int main()
{
    int left;
    int right;

    cout << "left:";
    cin >> left;
    cout << "right:";
    cin >> right;

    int ans = binaryNumsOfPrimeCount(left, right);

    cout << ans;

    return 0;
}