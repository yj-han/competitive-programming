// D. Different Arrays
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using pi = pair<int, int>;

void solve() {
    int n, m;
	cin >> n >> m;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	auto b = a;
    sort(b.begin(), b.end());

	int wins = 0;
	for (int i = 0; i < n && b[i] <= m; i++) {
		m -= b[i];
		wins++;
	}

	if (wins != 0 && wins != n && m + b[wins-1] >= a[wins]) ++wins;
	cout << n + 1 - wins << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}