#include <bits/stdc++.h>
using namespace std;

void bobby(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    /* for (int i = 0; i < t; i++)
     {
         int n;
         cin >> n;
     }*/
    int n;
    cin >> n;
    bobby(n);

    return 0;
}