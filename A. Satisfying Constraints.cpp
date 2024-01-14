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
    vector<pair<ll,ll>>v;
    for(ll i=0; i<n; i++)
    {
        ll a,x;
        cin>>a>>x;
        v.pb(mp(a,x));
    }
    //1-k must be grater than equal to some integer x;
    //1-maximum number find out in when a=1
    //2-k must be smaller than equal to some integer x;
    //1-minimum number have to find out in when a=2
    //3-exclude that number.
    ll minno=INT_MAX,maxno=INT_MIN;
    for(ll i=0; i<n; i++)
    {
        if(v[i].first==1)
        {
            maxno=max(maxno,v[i].second);
        }
        else if(v[i].first==2)
        {
            minno=min(minno,v[i].second);
        }
    }
    ll ans;
    ll mo=0;
    if(maxno>minno)
    {
        cout<<0<<endl;
    }
    else
    {
        for(ll i=0; i<n; i++)
        {
            if(v[i].first==3&&(v[i].second>=maxno&&v[i].second<=minno))
            {
                mo++;
            }
        }
       ll ans=minno-maxno+1-mo;
       cout<<ans<<endl;

    }
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


