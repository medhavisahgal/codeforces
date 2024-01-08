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
    string s;
    cin>>s;
    //remove the first character of the string
    //remove the second character of the string
    set<char>s1;
    ll ans=0;
    for(ll i=0;i<n;i++){
        s1.insert(s[i]);
        ans+=s1.size();
    }
    cout<<ans<<endl;
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
//this question was solely based upon observation and little bit of combination see testcase 3 to understand this problem more
