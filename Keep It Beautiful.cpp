#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
    ll q,num,flag=0,first=-1,last=-1;
    cin>>q;
    while(q--)
    {
        cin>>num;
        if(flag)
        {
            if(num>=last&&num<=first)
            {
                last=num;
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        else
        {
            if(first==-1)
            {
                first=num;
                last=num;
                cout<<1;
            }
            else if(num>=last)
            {
                last=num;
                cout<<1;
            }
            else if(first>=num)
            {
                last=num;
                flag=1;
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
    }
    cout<<endl;
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


