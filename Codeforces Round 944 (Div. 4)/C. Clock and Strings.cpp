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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool f=false;
    if(a>min(c,d)&&a<max(c,d)){
        if(b<min(c,d)||b>max(c,d)){
            f=true;
        }
    }
    if(b>min(c,d)&&b<max(c,d)){
        if(a<min(c,d)||a>max(c,d)){
            f=true;
        }
    }
    cout<<(f?"YES":"NO")<<endl;
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

