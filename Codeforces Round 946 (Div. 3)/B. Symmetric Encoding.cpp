#include<bits/stdc++.h>
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>s1(s.begin(),s.end());
    map<char,char>mp;
    auto front1=s1.begin();
    auto back1=s1.rbegin();
    for(int i=0; i<s1.size()/2; i++)
    {
        mp[*front1]=*back1;
        mp[*back1]=*front1;
        ++front1;
        ++back1;
    }
    if (s1.size() % 2 != 0)
    {
        mp[*front1] = *front1;
    }

    for (int i = 0; i < n; ++i)
    {
        s[i] = mp[s[i]];
    }
    cout << s << endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

