#include <bits/stdc++.h>
using namespace std;
void rec(int num)
{
    for (; num > 0; num = num - 1)
    {
        cout << num << endl;
    }
}
int main()
{
    int num;
    cin >> num;
    rec(num);

    return 0;
}