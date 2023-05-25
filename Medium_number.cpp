#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<3; i++)
        {
            int j=i;
            while(j>0&&a[j-1]>a[j])
            {
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                j--;
            }
        }
        cout<<a[1]<<endl;
    }
    return 0;
}
//using insertion sort
