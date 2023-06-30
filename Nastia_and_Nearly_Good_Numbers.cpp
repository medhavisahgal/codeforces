#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a*b==a){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            long long int x=a,y=a*b,z=a*(b+1);
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
return 0;}
