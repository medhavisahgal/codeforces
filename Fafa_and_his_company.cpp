#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    int i = 1;
    while (n > i)
    {
        int t = n - i;
        if (t % i == 0)
        {
            c++;
        }
        i++;
    }
    cout << c << endl;
    return 0;
}
