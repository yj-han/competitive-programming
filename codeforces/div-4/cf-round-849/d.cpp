// D. Distinct Split
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;
 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
 
    while (t--) {
        int n; string s; cin >> n >> s;
        vector<int> cnt(26, 0), p(26, 0);

        for (auto x : s) cnt[x - 'a']++;

        int ans = 0;
        for (auto x : s) {
            --cnt[x - 'a'];
            ++p[x - 'a'];

            int curr = 0;
            for (int i = 0; i < 26; i++) {
                curr += min(1, cnt[i]) + min(1, p[i]);
            }
            ans = max(curr, ans);
        }

        cout << ans << '\n';
    }
 
	return 0;
}