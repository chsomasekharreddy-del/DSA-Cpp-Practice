#include <bits/stdc++.h>
using namespace std;

int reverseBits(int n)
{
    int reverse = 0;

    for (int i = 0; i < 32; i++)
    {
        int last_digit = n & 1;
        reverse = reverse << 1;
        reverse = reverse | last_digit;
        n = n >> 1;
    }
    return reverse;
}

int main()
{
    int n;

    cout << "enter your num:";
    cin >> n;

    cout << reverseBits(n);
    return 0;
}