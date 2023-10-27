#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        m[v[i]]++;
    }
    int maxrep=m[v[0]];
    for(int i=0; i<n; i++)
    {
        if(maxrep<m[v[i]])
        {
            maxrep=m[v[i]];
        }
    }
    cout<<maxrep<<" "<<m.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}
