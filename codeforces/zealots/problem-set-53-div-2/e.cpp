// E. Matryoshkas
#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	map<int, int> cnt;

	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		cnt[x]++;
	}

	int ans = 0;
	for (auto it : cnt) {
		ans += min(it.second, max(it.second - cnt[it.first - 1], 0));
	}
	cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}