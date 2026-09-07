#include <bits/stdc++.h>
using namespace std;

int productGivenNumbers(int n)
{
    int temp = n;
    int product = 1;
    int sum = 0;
    while (temp != 0)
    {
        int last_digit = temp % 10;
        product = product * last_digit;
        sum = sum + last_digit;
        temp = temp / 10;
    }
    return product - sum;
}

int main()
{
    int n;
    cout << "enter n value:";
    cin >> n;

    int ans = productGivenNumbers(n);

    cout << ans;

    return 0;
}