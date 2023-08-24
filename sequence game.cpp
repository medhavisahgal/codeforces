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
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector<int>ans;
        int c=1;
        if(is_sorted(b,b+n))
        {
            cout<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            ans.push_back(b[0]);
            for(int i=1; i<n; i++)
            {
                if(b[i]>=b[i-1])
                {
                    ans.push_back(b[i]);
                    c++;

                }
                else
                {
                    ans.push_back(b[i]);
                    ans.push_back(b[i]);
                    c+=2;

                }
            }
            cout<<c<<endl;
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
