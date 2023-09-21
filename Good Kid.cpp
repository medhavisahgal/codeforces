#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v[0]++;
        long long int pro=1;
        for(int i=0;i<n;i++){
            pro*=v[i];
        }
        cout<<pro<<endl;
    }
return 0;}
//Approach is increasing the smallest will give the highest value of product you can see by ((new no -old no)/old no.) *100 for eg. (3-2/2*)100=50% where as (4-3/3)*100=33.33%
