#include <bits/stdc++.h>
using namespace std;

int CountOperationstoZero(int num1, int num2)
{

    int count = 0;
    while (num1 != 0 && num2 != 0)
    {
        if (num1 >= num2)
        {
            num1 = num1 - num2;
            count++;
        }
        else
        {
            num2 = num2 - num1;
            count++;
        }
    }

    return count;
}

int main()
{
    int num1;
    int num2;

    cout << "enter num1:";
    cin >> num1;

    cout << "enter num2:";
    cin >> num2;

    int ans = CountOperationstoZero(num1, num2);

    cout << ans;

    return 0;
}