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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(m,vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[j][i];
        }
    }
    int ans=0;
    for(int i=0; i<m; i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0; i<m; i++)
    {
        vector<int>suffix(n,0);
        suffix[n-1]=v[i][n-1];
        for(int j=n-2; j>=0; j--)
        {
            suffix[j]=v[i][j]+suffix[j+1];
        }
        for(int j=0; j<n-1; j++)
        {
            int c=suffix[j+1]-(n-1-j)*v[i][j];
            ans+=c;
        }
    }
    cout<<ans<<endl;
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


