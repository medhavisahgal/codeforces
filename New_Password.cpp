#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<char> v;
    for(int i = 97; i <= 122; i++)
    {
        v.push_back(char(i));
    }

    for(int i = 0; i < n; i++)
    {
        char c = v[i % k];
        cout << c;
    }

    return 0;
}
