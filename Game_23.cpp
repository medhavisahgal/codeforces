#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int moves=0;
    if(n==m)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(m%n==0)
    {
        int d=m/n;
        while(d%2==0)
        {
            d/=2;
            moves++;
        }
        while(d%3==0)
        {
            d/=3;
            moves++;
        }
        if(d!=1)
        {
            moves=-1;
        }
    }
    else
    {
        moves=-1;
    }
    cout<<moves<<endl;
    return 0;
}
