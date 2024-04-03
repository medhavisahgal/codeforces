#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const ll mod=1e9+7;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    bool d_d=false;
    for(int i=0; i<n; i++)
    {
        if(a[i]>9)
        {
            d_d=true;
        }
    }
    bool checked=false;
    if(!d_d)
    {
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<"YES"<<endl;
            checked=true;
        }
        else
        {
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]>9&&(a[i]%10)<(a[i]/10))
                {
                    cout<<"NO"<<endl;
                    checked=true;
                    break;
                }
                else if(a[i]>9&&(a[i]%10)>=(a[i]/10))
                {
                    a.insert(a.begin()+i+1,a[i]%10);
                    a[i]=a[i]/10;
                    i++;
                    if(is_sorted(a.begin(),a.end()))
                    {
                        cout<<"YES"<<endl;
                        checked=true;
                        break;
                    }
                }
            }
            if(!checked)
            {
                cout<<"NO"<<endl;
            }
        }
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

