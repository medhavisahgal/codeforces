#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int books,same=INT_MAX,leftmin=INT_MAX,rightmin=INT_MAX;
        cin>>books;
        long long int mins;
        string s;
        while(books--)
        {
            cin>>mins;
            cin>>s;
            if(s[0]=='1'&&s[1]=='1')
            {
                same=min(same,mins);
            }
            else if(s[0]=='1'&&s[1]=='0')
            {
                leftmin=min(leftmin,mins);
            }
            else if(s[0]=='0'&&s[1]=='1')
            {
                rightmin=min(rightmin,mins);
            }
        }
        //cout<<same<<" "<<leftmin<<" "<<rightmin<<endl;

        if(same!=INT_MAX)
        {
            if(leftmin!=INT_MAX&&rightmin!=INT_MAX)
            {
                cout<<min(same,leftmin+rightmin)<<endl;
            }
            else
            {
                cout<<same<<endl;
            }
        }
        else
        {
            if(leftmin!=INT_MAX&&rightmin!=INT_MAX)
            {
                cout<<leftmin+rightmin<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}


