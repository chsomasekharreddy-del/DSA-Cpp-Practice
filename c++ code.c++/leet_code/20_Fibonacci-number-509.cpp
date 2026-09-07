#include <bits/stdc++.h>
using namespace std;

int FibonacciNumber(int n)
{
    if (n <= 1)
        return n;

    return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
}

int main()
{
    int n;
    cout << "Enter num:";
    cin >> n;

    int ans = FibonacciNumber(n);

    cout << ans;
}