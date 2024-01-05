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
    vector<ll>a(n);
    vector<vector<ll>>v1;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //naive solution
    //for(ll i=0; i<n; i++)
    //{
    //  for(ll j=i; j<n; j++)
    //{
    //  vector<ll>v2;
    //for(ll k=i; k<=j; k++)
    //{
    //  v2.pb(a[k]);

    //}
    //v1.pb(v2);
    //}
    //}
    //bool flag=false;
    //for(const vector<ll> &sa:v1)
    //{
    //  ll sum=0;
    //for(ll ele:sa)
    //{
    //  sum+=ele;
    //}
    //if(sum==0)
    //{
    //  flag=true;
    //break;
    //}
    //}

    //------------naive solution ended here---------------
    //---------optimal solution--------------------
    map<ll,ll>m;
    ll prefix_sum=0;
    m[0]=1;
    for(ll i=0; i<n; i++)
    {
        if(i%2!=0)
        {
            a[i]=0-a[i];
        }
        prefix_sum+=a[i];
        if(m[prefix_sum])
        {
            cout<<"YES"<<endl;
            return;
        }
        m[prefix_sum]++;
    }
    cout<<"No"<<endl;
    //optimal solution ends
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


