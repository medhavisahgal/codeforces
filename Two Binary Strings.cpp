#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    string a,b;
    cin>>a;
    cin>>b;
    int n=a.size();
    bool k=false;
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i]&&a[i]=='0'&&a[i+1]==b[i+1]&&a[i+1]&&a[i+1]=='1')
        {
            k=true;
        }
    }
    if(k)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

