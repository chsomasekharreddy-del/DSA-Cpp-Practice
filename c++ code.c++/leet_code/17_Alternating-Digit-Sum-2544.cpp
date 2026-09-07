#include <bits/stdc++.h>
using namespace std;

int alternateSum(int n)
{

    int reverse = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n /= 10;
    }

    int sum = 0;
    int sign = +1;
    while (reverse != 0)
    {
        int digit = reverse % 10;
        sum = sum + (sign * digit);
        sign = -sign;
        reverse /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "enter your n:";
    cin >> n;

    int ans = alternateSum(n);
    cout << "result:" << ans;

    return 0;
}