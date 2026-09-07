#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    if (n <= 1)
        return 0;

    int count = 0;
    for (int i = 2; i * i <= n; i++)
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
    return count;
}

int main()
{
    int n;
    cout << "enter value of n:";
    cin >> n;

    cout << countPrimes(n);
    return 0;
}