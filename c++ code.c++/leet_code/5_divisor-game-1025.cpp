#include <bits/stdc++.h>
using namespace std;

bool divisorgame(int n)
{
    if (n % 2 != 0)
        return false;

    return true;
}

int main()
{
    int n;
    cout << "enter n value:";
    cin >> n;
    bool ans = divisorgame(n);

    cout << boolalpha << ans;

    return 0;
}