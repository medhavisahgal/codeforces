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
    string s;
    cin>>s;
    int ans=0,cn=0,cz=0,st=0;
    bool sk=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'&&st!=1){
            ans++;
            st=1;
        }
        if(s[i]=='0'&&st!=-1){
            ans++;
            st=-1;
        }
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0'&&s[i+1]=='1'){
            sk=true;
            break;
        }
    }
    if(sk){
        cout<<ans-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
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


