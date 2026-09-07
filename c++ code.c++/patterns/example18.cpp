#include <bits/stdc++.h>
using namespace std;

void bobby(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'E' - i;
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch++;
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