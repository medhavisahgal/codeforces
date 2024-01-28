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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll sum=0;
    ll l1=0,r1=n-1,l2=0,r2=m-1;
    while(l1<=r1){
        ll left=abs(a[l1]-b[r2]);
        ll right=abs(a[r1]-b[l2]);
        if(left>=right){
            sum+=left;
            l1++,r2--;
        }
        else{
            sum+=right;
            l2++,r1--;
        }
    }
    cout<<sum<<endl;
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


