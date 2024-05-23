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
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    vector<int>prefix(n);
    prefix[0]=a[0];
    for(int i=1; i<n; i++)
    {
        prefix[i]=a[i]+prefix[i-1];
    }
    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        int sum=0;
        if(l==0)
        {
            sum=prefix[n-1]-prefix[r]+(r+1)*k;
            if(sum%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(l==r){
            sum=prefix[n-1]-a[r]+k;
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            sum=prefix[n-1]-(prefix[r]-prefix[l-1])+(l-r+1)*k;
            if(sum%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
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

