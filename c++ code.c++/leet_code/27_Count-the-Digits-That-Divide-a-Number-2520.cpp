#include <bits/stdc++.h>
using namespace std;

int countdigits(int n)
{
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        if (temp % digit == 0)
        {
            count++;
        }
        temp = temp / 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int result = countdigits(n);
    cout << "count:" << result;

    return 0;
}