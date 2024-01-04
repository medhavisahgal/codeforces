#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    string s,s1;
    cin>>s;
    for(ll i=0; i<n;)
    {
        if((i+3<n&&s[i+3]=='a')||(i+3<n&&s[i+3]=='e'))
        {
            s1.pb(s[i]);
            s1.pb(s[i+1]);
            s1.pb('.');
            i+=2;
        }
        else if((i+3<n&&s[i+3]=='b')||(i+3<n&&s[i+3]=='c')||(i+3<n&&s[i+3]=='d'))
        {
            s1.pb(s[i]);
            s1.pb(s[i+1]);
            s1.pb(s[i+2]);
            s1.pb('.');
            i+=3;
        }
        else
        {
            s1.pb(s[i]);
            i++;
        }
    }
    cout<<s1<<endl;
}
int main()
{
    ios;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
