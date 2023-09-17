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
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]%=k;
            if(a[i]==0)
            {
                a[i]=k;
            }
        }
        vector<int>index(n);
        iota(index.begin(),index.end(),0);
        //Fill the index vector with values from 0 to n-1 Essentially, this vector keeps track of indices.
        stable_sort(index.begin(),index.end(),[&](int i,int j)
        {
            return a[i]>a[j];
        });
        //Sort the ord vector based on values in vector a. So, after this sort, ord will contain indices such that their corresponding values in a are indescending order. 
        //The sorting is stable, meaning the relative order of equivalent elements remains unchanged.
        for(int i=0;i<n;i++){
            cout<<index[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
