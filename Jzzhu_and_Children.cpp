#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>req_candies(n);
    for(int i=0; i<n; i++)cin>>req_candies[i];
    vector<int>candies(n,0);
    vector<int>indices(n);
    for(int i=0; i<n; i++)indices[i]=i+1;
    int last_child=-1;
    while(!indices.empty())
    {
        for(int i=0; i<indices.size(); i++)
        {
            int child=indices[i];
            if(candies[child-1]>=req_candies[child-1])
            {
                last_child=child;
                indices[i]=-1;
            }
            else
            {
                candies[child-1]+=m;
                if(candies[child-1]>=req_candies[child-1])
                {
                    last_child=child;
                    indices[i]=-1;
                }
            }
        }
        indices.erase(remove(indices.begin(),indices.end(),-1),indices.end());
    }
    cout<<last_child<<endl;

    return 0;
}
