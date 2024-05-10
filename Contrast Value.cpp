#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const ll mod=1e9+7;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int st=0,c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]&&st!=1){
            c++;
            st=1;
        }
        else if(a[i]>a[i+1]&&st!=-1){
            c++;
            st=-1;
        }
    }
    cout<<c+1<<endl;

}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

