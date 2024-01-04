#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;
 
char findMissingChar(string s)
{
    if (s[0] == '?' && s[1] == 'A' && s[2] == 'B') return 'C';
    if (s[0] == '?' && s[1] == 'A' && s[2] == 'C') return 'B';
    if (s[0] == '?' && s[1] == 'B' && s[2] == 'A') return 'C';
    if (s[0] == '?' && s[1] == 'B' && s[2] == 'C') return 'A';
    if (s[0] == '?' && s[1] == 'C' && s[2] == 'A') return 'B';
    if (s[0] == '?' && s[1] == 'C' && s[2] == 'B') return 'A';
 
    if (s[1] == '?' && s[0] == 'A' && s[2] == 'B') return 'C';
    if (s[1] == '?' && s[0] == 'A' && s[2] == 'C') return 'B';
    if (s[1] == '?' && s[0] == 'B' && s[2] == 'A') return 'C';
    if (s[1] == '?' && s[0] == 'B' && s[2] == 'C') return 'A';
    if (s[1] == '?' && s[0] == 'C' && s[2] == 'A') return 'B';
    if (s[1] == '?' && s[0] == 'C' && s[2] == 'B') return 'A';
 
    if (s[2] == '?' && s[0] == 'A' && s[1] == 'B') return 'C';
    if (s[2] == '?' && s[0] == 'A' && s[1] == 'C') return 'B';
    if (s[2] == '?' && s[0] == 'B' && s[1] == 'A') return 'C';
    if (s[2] == '?' && s[0] == 'B' && s[1] == 'C') return 'A';
    if (s[2] == '?' && s[0] == 'C' && s[1] == 'A') return 'B';
    if (s[2] == '?' && s[0] == 'C' && s[1] == 'B') return 'A';
 
    return '?'; // Handle the case where there is no '?'
}
 
void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
 
    if(findMissingChar(a)!='?')
    {
        cout<<findMissingChar(a)<<endl;
        return;
    }
    else if(findMissingChar(b)!='?')
    {
        cout<<findMissingChar(b)<<endl;
        return;
    }
    else if(findMissingChar(c)!='?')
    {
        cout<<findMissingChar(c)<<endl;
        return;
    }
}
 
int main()
{
    ios;
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
 
