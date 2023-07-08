#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        for (int i = 0; i < n; i++) {
            if (v[i].first - v[i].second > 0) {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
