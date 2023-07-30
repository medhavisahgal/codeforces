#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int maxl=1;
        vector<int>v;
        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]<=k)
            {
                maxl++;
            }
            else{
                v.push_back(maxl);
                maxl=1;
            }
        }
        v.push_back(maxl);
        int maxele=*max_element(v.begin(),v.end());
        int ans=n-maxele;
        cout<<ans<<endl;
    }
    return 0;
}
