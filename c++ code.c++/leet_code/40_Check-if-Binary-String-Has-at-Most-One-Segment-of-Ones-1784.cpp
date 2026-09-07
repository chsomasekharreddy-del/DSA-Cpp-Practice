#include <bits/stdc++.h>
using namespace std;

bool check(string &s)
{
    return s.find("01") == string::npos;
}

int main()
{
    string s;
    cout << "s=";
    getline(cin, s);

    bool ans = check(s);

    cout << "Output:" << boolalpha << ans;

    return 0;
}