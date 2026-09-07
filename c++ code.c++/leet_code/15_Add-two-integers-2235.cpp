#include <bits/stdc++.h>
using namespace std;

int Addtwointegers(int num1, int num2)
{
    int result = num1 + num2;

    return result;
}

int main()
{
    int num1, num2;

    cout << "enter num1:";
    cin >> num1;

    cout << "enter num2:";
    cin >> num2;

    int ans = Addtwointegers(num1, num2);

    cout << "output:" << ans;

    return 0;
}