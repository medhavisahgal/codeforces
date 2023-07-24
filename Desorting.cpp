#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=INT_MAX;
        if(is_sorted(a,a+n)==false)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                ans=min(ans,a[i+1]-a[i]);
            }
            cout<<(ans/2)+1<<endl;
        }
    }
    return 0;
}
