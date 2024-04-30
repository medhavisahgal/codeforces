#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const ll mod=1e9+7;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans=2;
    while(true){
        set<ll>s1;
        for(int i=0;i<n;i++){
            s1.in(a[i]%ans);
        }
        if(s1.size()==2){
            cout<<ans<<endl;
            return;
        }
        ans*=2;
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


