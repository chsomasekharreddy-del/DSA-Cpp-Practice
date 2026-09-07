#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;
    if (age < 18)
    {
        cout << "not eligible for job";
    }
    else if (age >= 18 && age <= 56)
    {
        cout << "eligible for job";
    }
    else
    {
        cout << "not eligible for job";
    }
    return 0;
}