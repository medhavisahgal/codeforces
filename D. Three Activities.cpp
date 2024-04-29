#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const ll mod = 1e9 + 7;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++) cin >> c[i];

    vector<pair<ll, ll>> s1, s2, s3;
    for(ll i = 0; i < n; i++) {
        s1.pb(mp(a[i], i));
        s2.pb(mp(b[i], i));
        s3.pb(mp(c[i], i));
    }

    sort(s1.begin(), s1.end(), greater<>());
    sort(s2.begin(), s2.end(), greater<>());
    sort(s3.begin(), s3.end(), greater<>());

    ll sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(s1[i].second != s2[j].second && s1[i].second != s3[k].second && s2[j].second != s3[k].second) {
                    sum = max(sum, s1[i].first + s2[j].first + s3[k].first);
                }
            }
        }
    }
    cout << sum << endl;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
