#include <bits/stdc++.h>
using namespace std;

int reduceNumberToZero(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
        }
        else
        {
            num = num - 1;
            count++;
        }
    }
    return count;
}

int main()
{
    int num;

    cout << "enter your number:";
    cin >> num;

    int ans = reduceNumberToZero(num);

    cout << ans;

    return 0;
}