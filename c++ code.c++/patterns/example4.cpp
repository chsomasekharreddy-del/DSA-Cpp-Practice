#include <bits/stdc++.h>
using namespace std;

void vishnu(int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << i << "";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vishnu(n);
    return 0;
}