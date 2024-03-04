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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            l=i;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<0&&a[i+1]>=0&&i!=n-1)
        {
            r=i;
            break;
        }
    }
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        for(int i=l; i<=r; i++)
        {
            a[i]=0-a[i];
        }
    }
    int maxsum=0;
    for(int i=0; i<n; i++)
    {
        maxsum+=a[i];
    }
    cout<<maxsum<<endl;
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


