#include <bits/stdc++.h>
using namespace std;

void bobby(int n)
{
    for (int i = 1; i < n; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    bobby(n);
    return 0;
}