#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=INT_MIN,mi=INT_MAX;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        mi=min(mi,a[i]);
    }
    sort(a.begin(),a.end());
    int n1=0,n2=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==mx)
        {
            n1++;
        }
        if(a[i]==mi)
        {
            n2++;
        }
    }
    if(mx==mi)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<n-n1-n2<<endl;
    }
    return 0;
}
