#include <bits/stdc++.h>
using namespace std;

int reverse_integer(int n)
{
    int temp = n;
    int reverse = 0;

    while (temp != 0)
    {
        int last_digit = temp % 10;
        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        {
            return 0;
        }
        reverse = reverse * 10 + last_digit;
        temp = temp / 10;
    }
    return reverse;
}

int main()
{
    int n;
    cout << "enter digit:";
    cin >> n;

    int ans = reverse_integer(n);

    cout << ans;

    return 0;
}