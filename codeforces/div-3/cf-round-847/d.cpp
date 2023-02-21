#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]] += 1;
        }

        int ans = n;
        int last = -1;
        int cnt = 0;
        for (auto& p : mp) {
            if (p.first == last + 1) {
                ans -= min(p.second, cnt);
            }
            last = p.first;
            cnt = p.second;
        }
        cout << ans << '\n';
    }

    return 0;
}