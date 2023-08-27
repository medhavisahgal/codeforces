#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string like = "vika";
        int found = 0;
        for (int i = 0; i < m; i++)
        {
            bool c = false;
            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == like[found])
                {
                    c = true;
                }
            }
            if (c)
            {
                found++;
                if (found == 4)
                {
                    break;
                }
            }
        }
        if (found == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
