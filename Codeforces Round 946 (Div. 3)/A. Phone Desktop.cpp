#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const ll mod=1e9+7;
using namespace std;

void solve()
{
    int x;
    int y;
    cin >> x >> y;

    double hm = 0;
    double hml = 0;

    if (y % 2 == 0)
    {
        hm = y / 2;
        hml = 7 * hm;
    }
    else
    {
        hm = y / 2 + 1;
        hml = 7 * (hm - 1) + 11;
    }

    if (x > hml)
    {
        hml = x - hml;
        hm += ceil(hml / 15.0);
    }

    cout << hm << endl;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
