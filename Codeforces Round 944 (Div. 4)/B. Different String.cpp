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
    set<char>s1;
    char re;
    for(int i=0;i<s.size();i++){
        s1.in(s[i]);
    }
    if(s1.size()==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                re=s[i];
                s[i]=s[i+1];
                s[i+1]=re;
                break;
            }
        }
        cout<<s<<endl;
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
