#include <bits/stdc++.h>
using namespace std;

int FactOfTrailingZeros(int n)
{
    if (n == 0)
        return 0;

    return n / 5 + FactOfTrailingZeros(n / 5);
}

int main()
{
    int n;
    cout << "enter your num:";
    cin >> n;

    int ans = FactOfTrailingZeros(n);

    cout << "output:" << ans;
}