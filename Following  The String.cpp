#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
const ll mod=1e9+7;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>cnt(26,0);
    //cnt=[0,0,0,0,0,0,0,0,0,0,0,0,0,.....26 times]
    for(ll i=0; i<n; i++)cin>>a[i];
    //a=[0,0,0,1,0,2,0,3,1,1,4]
    string sol="";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(cnt[j]==a[i])
            {
                sol+=(char)('a'+ j);
                //sol=a
                //sol=ab
                //sol=abc
                //sol=abca
                //sol=abcad
                //sol=abcada
                //sol=abcadae..
                //sol=abcadaea
                //sol=abcadaeab
                //sol=abcadaeabc
                //sol=abcadaeabca
                cnt[j]++;
                //cnt=[1,0,0,0,0,0.....]
                //cnt=[1,1,0,0,0,0.....]
                //cnt=[1,1,1,0,0,0.....]
                //cnt=[2,1,1,0,0,0.....]
                //cnt=[2,1,1,1,0,0.....]
                //cnt=[3,1,1,1,0,0.....]
                //cnt=[3,1,1,1,1,0.....]
                //cnt=[4,1,1,1,1,0.....]
                //cnt=[4,2,1,1,1,0.....]
                //cnt=[4,2,2,1,1,0.....]
                //cnt=[5,2,2,1,1,0.....]
                break;
            }
        }
    }
    cout<<sol<<endl;
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


