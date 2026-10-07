#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "bobby";
    int len = s.size();
    s[len - 3] = 'i';
    cout << s[len - 3];
    return 0;
}