#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,r;
        cin>>a>>b>>c;
        int m=max(a,b);
        int add=a+b;
        r=ceil((m-(double)(add/2.00))/c);
        cout<<r<<endl;
    }
    return 0;
}
