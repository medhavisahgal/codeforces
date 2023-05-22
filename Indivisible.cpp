#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, e = 2, o = 1;
        cin >> n;
        vector<int> v;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            if (n % 2 != 0)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    v.push_back(e);
                    v.push_back(o);
                    e += 2;
                    o += 2;
                }
                for (int i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
