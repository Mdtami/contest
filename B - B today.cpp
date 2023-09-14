#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    char input;
    cin >> a >> b;
    cin >> input;

    if (input == '+')
    {
        cout << a + b << endl;
    }
    else if (input == '-')
    {
        cout << a - b << endl;
    }
    else if (input == '*')
    {
        cout << a * b << endl;
    }
    else if (input == '/')
    {
        double res = a / b;
        printf("%0.1f", res);
    }
    else
    {
        cout << "Invalid operator" << endl;
    }
}