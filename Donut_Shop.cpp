#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int pro=b*a;
        if(a<c){
            cout<<1<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        if(pro>c){
            cout<<b<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//difficult to think off
