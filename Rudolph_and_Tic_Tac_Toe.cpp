#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        bool winnerFound = false;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }

        // Check diagonals
        if (a[0][0] != '.' && a[0][0] == a[1][1] && a[1][1] == a[2][2])
        {
            cout << a[0][0] << endl;
            winnerFound = true;
        }
        else if (a[0][2] != '.' && a[0][2] == a[1][1] && a[1][1] == a[2][0])
        {
            cout << a[0][2] << endl;
            winnerFound = true;
        }

        // Check rows and columns
        if (!winnerFound)
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[i][0] != '.' && a[i][0] == a[i][1] && a[i][1] == a[i][2])
                {
                    cout << a[i][0] << endl;
                    winnerFound = true;
                    break;
                }
                if (a[0][i] != '.' && a[0][i] == a[1][i] && a[1][i] == a[2][i])
                {
                    cout << a[0][i] << endl;
                    winnerFound = true;
                    break;
                }
            }
        }

        if (!winnerFound)
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
