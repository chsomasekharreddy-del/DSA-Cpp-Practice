#include <bits/stdc++.h>
using namespace std;

string convertstringsmall(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "enter string:";
    cin >> s;

    string result = convertstringsmall(s);
    cout << result;

    return 0;
}