#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int g=1;
        sort(a,a+n);

        for(int i=n-1; i>=0; i--)
        {
            if(a[i]<=i+1)
            {
                cout<<i+2<<endl;
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<1<<endl;
        }

    }
    return 0;
}
