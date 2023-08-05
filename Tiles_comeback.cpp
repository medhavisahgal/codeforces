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
        vector<int>c(n);
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }
        int cnt=0;
        int cnt1=0;
        int cnt2=0;
        int index=-1;
        int index1=-1;
        if(c[0]==c[n-1])
        {
            for(int i=0; i<n; i++)
            {
                if(c[i]==c[0])
                {
                    cnt++;
                }
            }
            if(cnt>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(c[i]==c[0])
                {
                    cnt1++;
                }
                if(cnt1%k==0)
                {
                    index =i+1;
                    break;
                }
            }
            for(int i=n-1; i>=0; i--)
            {
                if(c[i]==c[n-1])
                {
                    cnt2++;
                }
                if(cnt2%k==0)
                {
                    index1 =i+1;
                    break;
                }
            }
            if(index<index1&&index!=-1&&index1!=-1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
