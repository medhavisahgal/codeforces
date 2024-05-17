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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    vector<int>prefix1(n);
    prefix1[0]=a[0];
    for(int i=1; i<n; i++)
    {
        prefix1[i]=a[i]+prefix1[i-1];
    }
    vector<int>sa(n);
    for(int i=0; i<n; i++)
    {
        sa[i]=a[i];
    }
    sort(sa.begin(),sa.end());
    vector<int>prefix2(n);
    prefix2[0]=sa[0];
    for(int i=1; i<n; i++)
    {
        prefix2[i]=sa[i]+prefix2[i-1];
    }
    int m;
    cin>>m;
    while(m--)
    {
        int ty,l,r;
        cin>>ty>>l>>r;
        if(ty==1)
        {
            l-=1;
            r-=1;
            if(l==0)
            {
                cout<<prefix1[r]<<endl;
            }
            else
            {
                cout<<prefix1[r]-prefix1[l-1]<<endl;
            }
        }
        if(ty==2)
        {
            l-=1;
            r-=1;
            if(l==0)
            {
                cout<<prefix2[r]<<endl;
            }
            else
            {
                cout<<prefix2[r]-prefix2[l-1]<<endl;
            }
        }
    }
}
signed main()
{
    fast;
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}


