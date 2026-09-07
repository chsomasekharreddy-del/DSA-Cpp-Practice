#include <bits/stdc++.h>
using namespace std;

void vasu(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vasu(n);
    return 0;
}