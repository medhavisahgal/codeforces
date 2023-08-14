#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> s(n);
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end());

        int left = 1, right = 1e9,ans=-1;

        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            int sum = 0;
            for(int i = 0; i < n; i++)
            {
                if(sum > c) break;

                int term = s[i] + 2*mid;
                sum += term * term;
                if(sum > c) break;
            }

            if(sum == c)
            {
                ans = mid;
                break;
            }
            else if(sum > c)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
