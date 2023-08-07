#include<bits/stdc++.h>
using namespace std;
int sol(int n,vector<int>&a)
{
    int c=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
        {
            c=max(c,a[i-1]);
        }
    }
    return c;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int c=sol(n,a);
        cout<<c<<endl;
    }
    return 0;
}
