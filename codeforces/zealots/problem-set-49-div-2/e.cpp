// E. 2-Letter Strings
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;
using pi = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<vector<int>> cnt(12, vector<int>(12, 0));
        long long ans = 0;
        
        for (int i = 0;i < n; ++i) {
            string s; cin >> s;
            for (int j = 0; j < 2; ++j) {
                for (char c = 'a'; c <= 'k'; ++c) {
                    if (c == s[j]) continue;
                    string a = s; a[j] = c;
                    ans += cnt[a[0] - 'a'][a[1] - 'a'];
                }
            }
            ++cnt[s[0] - 'a'][s[1] - 'a'];
        }
        cout << ans << "\n";
    }
}