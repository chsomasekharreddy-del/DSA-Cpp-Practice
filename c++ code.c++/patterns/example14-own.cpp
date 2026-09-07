#include <bits/stdc++.h>
using namespace std;

void bobby(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
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