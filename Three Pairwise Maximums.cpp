#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
const ll mod=1e9+7;
using namespace std;
void solve()
{
    //input:x y z
    //x=max(a,b)
    //y=max(a,c)
    //z=max(b,c)
    //output: a,b,c
    // in what condition the answer is no we have to find out and
    //if answer is yes that the pair exist then we can print that
    //pair in any order
    //-----------------solution---------------
    //we have assumed that x<=y<=z so in that case y and z should
    // be equal so now c is fixed a and b can be equal to c or
    //should be smaller
    vector<int>a(3);
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[1]!=a[2])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
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
