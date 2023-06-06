#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int result = -1;
    if (a == b)
    {
        result = -1;
    }
    else if (a.length() != b.length())
    {
        result = max(a.length(), b.length());
    }
    else
    {
        result = a.length();
    }
    cout<< result << endl;

    return 0;
}
