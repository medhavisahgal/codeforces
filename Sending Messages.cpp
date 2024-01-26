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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>m(n);
    for(ll i=0; i<n; i++)cin>>m[i];
    ll on=f-(m[0]*a);
    ll off=f-b;
    f=max(on,off);
    if(f>0){
        for(ll i=1;i<n;i++){
            on=f-(m[i]-m[i-1])*a;
            off=f-b;
            f=max(on,off);
            if(f<=0){
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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


