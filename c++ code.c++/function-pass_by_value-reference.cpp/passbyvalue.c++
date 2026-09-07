#include <bits/stdc++.h>
using namespace std;
// if i put &sign before string s at void it called by reference
// if i didn'tput &sign before string s at void it called by value
// check it in notes what does mean

void dosomething(string s)
{
    s[0] = 'k';
    cout << s << endl;
}
int main()
{
    string s = "bobby";

    dosomething(s);

    cout << s << endl;

    return 0;
}