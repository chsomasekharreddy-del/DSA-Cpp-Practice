#include <bits/stdc++.h>
using namespace std;

void bobby(int n)
{
    int space = 2 * n;
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}

int main()
{
    int n;
    cin >> n;
    bobby(n);
    return 0;
}