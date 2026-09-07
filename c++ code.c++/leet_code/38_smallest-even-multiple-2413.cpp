#include <bits/stdc++.h>
using namespace std;

int smallestint(int n)
{
    if (n % 2 != 0)
    {
        return n * 2;
    }
    return n;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int ans = smallestint(n);
    cout << "output:" << ans;

    return 0;
}