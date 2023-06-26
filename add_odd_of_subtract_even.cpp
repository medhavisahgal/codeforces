#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        if(a>b)
        {
            int sub=a-b;
            if(sub%2==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else if(b>a)
        {
            int sub=b-a;
            if(sub%2!=0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }

        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
