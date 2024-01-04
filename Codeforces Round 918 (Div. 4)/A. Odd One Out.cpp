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
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b&&a!=c){
        cout<<a<<endl;
    }
    else if(b!=a&&b!=c){
        cout<<b<<endl;
    }
    else if(c!=b&&c!=a){
        cout<<c<<endl;
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
 
