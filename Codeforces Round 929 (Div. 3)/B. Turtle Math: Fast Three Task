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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    ll sum=0;
    bool re_ind=false;
    for(int i=0; i<n; i++)sum+=a[i];
    if(sum%3==0)
    {
        cout<<0<<endl;
    }
    else if(sum%3==2)
    {
        cout<<1<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%3==1)
            {
                re_ind=true;
                break;
            }
        }
        if(re_ind)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}
