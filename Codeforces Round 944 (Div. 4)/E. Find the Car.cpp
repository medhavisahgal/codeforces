#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const int mod=1e9+7;
using namespace std;
void solve()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(k+1),b(k+1);
    for(int i=1; i<=k; i++)cin>>a[i];
    for(int i=1; i<=k; i++)cin>>b[i];
    while(q--)
    {
        int x;
        cin>>x;
        int lb=1;
        int ub=k;
        int l=1;
        int ans=0;
        while(lb<=ub)
        {
            int mid=(lb+ub)/2;
            if(a[mid]<=x)
            {
                lb=mid+1;
                l=mid;
            }
            else
            {
                ub=mid-1;
            }
        }
        if (x == 0)
        {
            cout << 0 << " ";
        }else if(l+1>k||x<=a[l]){
            ans=b[l]*x/a[l];
            cout<<ans<<" ";
        }
        else
        {
            ans = (b[l + 1] - b[l]) * (x - a[l]) / (a[l + 1] - a[l]);
            cout << b[l] + ans << " ";
        }
    }
    cout<<endl;
}
signed main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
