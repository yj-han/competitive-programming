#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;
using ll = long long;

int t, n, k;
string a, b;
set<char> s;
ll dp[100001][100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> n >> k;
        cin >> a >> b;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                dp[i] += 1;
                dp[i]
            }

        }

        for (int i = 1; i < n; i++) {
            if (a[i] == b[i]) {
                dp[i-1][i] = dp[i-1][i-1] + 1;
            } else {
                if (s.find(a[i]) != s.end()) {
                    dp[i][i] = dp[i-1][i-1] > 0 + 1;
                } else if (s.size() < k) {
                    s.insert(a[i]);
                } else {

                }
            }
        }
    }

	return 0;
}