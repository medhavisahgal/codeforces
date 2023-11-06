#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve(){
    ll n;
    cin>>n;
    ll j=3;
    vector<int>a(n);
    a[0]=1;
    a[1]=2;
    for(int i=2;i<n;i++){
        if(a[i-1]*2<=n){
            a[i]=a[i-1]*2;
        }
        else{
            a[i]=j;
            j+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;}
