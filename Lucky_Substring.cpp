#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve(){
    string s;
    cin>>s;
    int four=0,seven=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'){
            four++;
        }
        else if(s[i]=='7'){
            seven++;
        }
    }
    if(four>seven){
        cout<<4<<endl;
    }
    else if(seven>four){
        cout<<7<<endl;
    }
    else if(four==seven&&seven!=0){
        cout<<4<<endl;
    }
    else if(four==0&&seven==0){
        cout<<-1<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;}
