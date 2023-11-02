#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    int ans=0;
    int prev=v[0].second;
    for(int i=0; i<n; i++)
    {

        if(v[i].second>prev)
        {
            ans+=v[i].first*prev;
        }
        else
        {
            ans+=v[i].first*v[i].second;
            prev=v[i].second;
        }

    }
    cout<<ans<<endl;
    return 0;
}

