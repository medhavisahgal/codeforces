#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    //Note number of divisor of number n can be approximatively equal to n^1/3
    vector<ll>a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=-1;
    for(ll i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            ll big=-1e18,sm=1e18;
            for(ll j=0; j<n; j+=i)
            {
                ll sum=0;
                for(ll k=j; k<j+i; k++)
                {
                    sum+=a[k];
                }
                big=max(big,sum);
                sm=min(sm,sum);
            }
            ans=max(ans,big-sm);
        }
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


