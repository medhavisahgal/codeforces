#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double n,m,k;
        cin>>n>>m>>k;
        double max_cards=min(m,n/k);
        double remaining_player=k-1;
        double cal= (m- max_cards)/remaining_player;
        double other_jokers=ceil(cal);
        int points=max_cards - other_jokers;
        cout<<points<<endl;
    }
return 0;}
