#include <bits/stdc++.h>
using namespace std;

bool check(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool valid_palindrome(string &s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return check(s, i + 1, j) || check(s, i, j - 1);
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s;

    cout << "s=";
    getline(cin, s);

    bool ans = valid_palindrome(s);

    cout << "Output:" << ans;

    return 0;
}