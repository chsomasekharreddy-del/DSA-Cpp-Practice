#include <bits/stdc++.h>
using namespace std;

int MiniCostToSplitIntoOnes(int n)
{
    return n * (n - 1) / 2;
}

int main()
{
    int n;
    cout << " enter number:";
    cin >> n;

    int ans = MiniCostToSplitIntoOnes(n);
    cout << ans;

    return 0;
}