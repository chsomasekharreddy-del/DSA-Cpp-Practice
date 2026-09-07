#include <bits/stdc++.h>
using namespace std;

void reversestring(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main()
{
    int n;
    cout << "enter elements:";
    cin >> n;

    cout << "enter array:";

    vector<char> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    reversestring(arr);

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}