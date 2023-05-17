#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans;
        cin>>n>>k;
        if(n==1)
        {
            cout<<k<<endl;
        }
        else if(n==k)
        {
            cout<<1<<endl;
        }
        else if(n<k)
        {
            int evenlydivided=k/n;
            int leftelement=k%n;
            if(leftelement!=0)evenlydivided++;
            cout<<evenlydivided<<endl;
        }
        else if(n>k)
        {
            int evenlydivided=n/k;
            int leftelement=n%k;
            if(leftelement!=0)evenlydivided++;
            k*=evenlydivided;
            int a=k/n;
            int b=k%n;
            if(b!=0)a++;
            cout<<a<<endl;
        }

    }
    return 0;
}
