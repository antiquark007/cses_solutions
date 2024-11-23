#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Discard the leftover newline after reading t
    while (t--)
    {
        string largeString;
        getline(cin, largeString);

        // Ensure the input is valid
        if (largeString.size() < 3)
        {
            cout << "Invalid input!" << endl;
            continue;
        }

        char a = largeString[0];
        char ch = largeString[1];
        char b = largeString[2];

        if (ch == '=')
        {
            if (a == b)
                cout << a << ch << b << endl;
            else
                cout << a << ch <<a << endl;
        }
        else if (ch == '>')
        {
            if (a > b)
                cout << a << ch << b << endl;
            else
                cout << b << ch << a << endl;
        }
        else if (ch == '<')
        {
            if (a < b)
                cout << a << ch << b << endl;
            else
                cout << b << ch << a << endl;
        }
        else
        {
            cout << "Invalid operator!" << endl;
        }
    }
    return 0;
}
