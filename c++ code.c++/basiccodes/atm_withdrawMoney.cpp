#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balance = 4000;
    int amount;
    cout << "amount :";
    cin >> amount;

    if (amount <= balance)
    {
        if (amount % 100 == 0 || amount % 500 == 0 || amount % 2000 == 0)
        {
            cout << "amount processing";
        }
    }
    else
    {
        cout << "insufficient balance";
    }
    return 0;
}