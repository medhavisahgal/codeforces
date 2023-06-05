#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int max_n_coins=min(a,s/n);
        int rem_value=s-max_n_coins*n;
        if(rem_value<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
