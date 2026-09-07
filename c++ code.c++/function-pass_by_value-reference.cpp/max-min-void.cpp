#include <bits/stdc++.h>
using namespace std;

void min(int num1, int num2)
{
    if (num1 <= num2)
    {
        cout << num1;
    }

    else
    {
        cout << num2;
    }
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    min(num1, num2);
    return 0;
}