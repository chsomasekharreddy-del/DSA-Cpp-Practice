#include <bits/stdc++.h>
using namespace std;

bool powerofthree(int n)
{
    if (n == 1)
        return true;
    if (n <= 0)
        return false;
    if (n % 3 != 0)
        return false;
    return powerofthree(n / 3);
}

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    bool ans = powerofthree(n);
    cout << ans;
    return 0;
}