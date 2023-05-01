#include<bits/stdc++.h>
using namespace std;
bool prime(int i)
{
    for(int j=2; j*j<=i; j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    int ans;
    for(int i=n+1; i<=m; i++)
    {
        if(prime(i))
        {
            if(i==m)
            {
                cout<<"YES"<<endl;
                c=0;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                c=0;
                break;
            }
        }
        else{
            c=1;
        }
    }
    if(c==1){
        cout<<"NO"<<endl;
    }
    return 0;
}


