#include <bits/stdc++.h>
using namespace std;

bool doublereversal(int n)
{
    if (n == 0)
        return true;
    int reverse = 0;
    int temp = n;
    while (temp != 0)
    {
        int last_digit = temp % 10;
        reverse = reverse * 10 + last_digit;
        temp = temp / 10;
    }
    int sreverse = 0;
    while (reverse != 0)
    {
        int digit = reverse % 10;
        sreverse = sreverse * 10 + digit;
        reverse = reverse / 10;
    }
    return sreverse == n;
}

int main()
{
    int n;
    cout << "enter your number:";
    cin >> n;

    bool ans = doublereversal(n);

    cout << ans;

    return 0;
}