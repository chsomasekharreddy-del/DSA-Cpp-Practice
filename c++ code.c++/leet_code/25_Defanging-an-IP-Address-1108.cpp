#include <bits/stdc++.h>
using namespace std;

string input(string address)
{
    string result = "";
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            result = result + "[.]";
        }
        else
        {
            result = result + address[i];
        }
    }
    return result;
}

int main()
{
    string address;
    cout << "enter address:";
    cin >> address;

    string ans = input(address);

    cout << ans;

    return 0;
}