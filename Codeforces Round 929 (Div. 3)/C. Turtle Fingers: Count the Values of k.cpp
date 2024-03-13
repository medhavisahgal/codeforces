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
    ll a,b,l;
    cin>>a>>b>>l;
    ll now1=0;
    ll now2=0;
    ll da=a,db=b;
    set<ll>dis;
    dis.insert(l);
    while(l%da==0)
    {
        dis.insert(l/da);
        now1++;
        da*=a;
    }
    while(l%db==0)
    {
        dis.insert(l/db);
        now2++;
        db*=b;
    }
    da=a,db=b;
    for(int i=1;i<=now1; i++)
    {
        db=b;
        for(int j=1; j<=now2; j++)
        {
            if(l%(da*db)==0)
            {
                dis.insert(l/(da*db));
                db*=b;
            }
        }
        da*=a;
    }
    cout<<dis.size()<<endl;

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


