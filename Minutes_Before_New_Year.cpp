#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,ans;
        cin>>h>>m;
        if(h==0)
        {
            ans=1440-m;
        }
        else
        {
            ans=abs(23-h)*60+60-m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
