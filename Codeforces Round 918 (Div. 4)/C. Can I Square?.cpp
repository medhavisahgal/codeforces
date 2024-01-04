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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum>=0){
        ll r=sqrt(sum);
        if(r*r==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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
 
