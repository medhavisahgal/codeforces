#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    string result = "#Black&White";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
            {
                result = "#Color";
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}
