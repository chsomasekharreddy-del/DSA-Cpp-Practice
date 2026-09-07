#include <bits/stdc++.h>
using namespace std;
void bobby(int n)
{
    int nums = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nums << " ";
            nums = nums + 1;
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