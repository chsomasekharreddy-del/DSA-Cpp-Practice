#include <bits/stdc++.h>
using namespace std;

bool threedivisiors(int n)
{

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 3)
        return true;

    return false;
}

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    bool ans = threedivisiors(n);

    cout << ans;

    return 0;
}