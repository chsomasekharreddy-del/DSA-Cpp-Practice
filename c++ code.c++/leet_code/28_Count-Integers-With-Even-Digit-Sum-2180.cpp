#include <bits/stdc++.h>
using namespace std;

int countEvenDigitSum(int num)
{

    int cnt = 0;
    for (int i = 1; i <= num; i++)
    {
        int temp = i;
        int sum = 0;

        while (temp != 0)
        {
            int last_digit = temp % 10;
            sum = sum + last_digit;
            temp = temp / 10;
        }
        if (sum % 2 == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int num;

    cout << "enter num:";
    cin >> num;

    int ans = countEvenDigitSum(num);
    cout << ans;
    return 0;
}