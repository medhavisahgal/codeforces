#include<bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    string s1 = n;
    reverse(s1.begin(), s1.end());
    string res = n + s1;
    cout << res << endl;
    return 0;
}
