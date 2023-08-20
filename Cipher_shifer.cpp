#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        char start=s[0];
        for(int i=1; i<n; i++)
        {
            if(s[i]==start)
            {
                cout<<start;
                if(i!=n-1)
                {
                    start=s[i+1];
                    i++;
                }
            }
            else
            {
                continue;
            }
        }
        cout<<endl;
    }
    return 0;
}
