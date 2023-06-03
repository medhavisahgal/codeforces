#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0; i<n-1; i++)
    {
        int c=0;
        string s1;
        cin>>s1;
        for(int j=0; j<s1.size(); j++)
        {
            if(s[j]==s1[j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        v.push_back(c);
        s=s1;
    }
    cout<<*min_element(v.begin(),v.end())<<endl;

    return 0;
}
