#include<bits/stdc++.h>
using namespace std;
bool custom_sort(const pair<int,int>& a, const pair<int,int>& b)
{
    if(a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>p;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            p.push_back(make_pair(a,b));
        }
        sort(p.begin(),p.end(),custom_sort);
        long long int ans=0;
        int on=0,i=0,start=0;
        while(i<n)
        {
            ans+=p[i].second;
            on++;
            i++;
            int cnt=0;
            while(start<n && p[start].first<=on)
            {
                if(start<i)
                {
                    cnt++;
                }
                start++;
            }
            on-=cnt;
            i=max(i,start);
        }
        cout<<ans<<endl;

    }
    return 0;
}
