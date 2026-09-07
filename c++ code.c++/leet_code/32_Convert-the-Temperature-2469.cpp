#include <bits/stdc++.h>
using namespace std;

vector<double> temperature(double celsius)
{
    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    return {kelvin, fahrenheit};
}

int main()
{
    double celsius;

    cout << "enter celsius:";
    cin >> celsius;

    vector<double> ans = temperature(celsius);

    cout << "Kelvin: " << ans[0] << endl;
    cout << "Fahrenheit: " << ans[1] << endl;

    return 0;
}