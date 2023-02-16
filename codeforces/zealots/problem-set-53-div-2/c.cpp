// C. Koxia and Permutation
#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
	vector<int> p(n);

	int v = n;
	int l = 0, r = k - 1;
	while (r < n) {
		if (p[l]) {
			l++; r = l + k - 1; continue;
		} else {
			p[l] = v;
			p[r] = n - v + 1;
			l++; r++; v--;
		}
	}
	while (l < n) {
		if (p[l]) {
			l++; continue;
		}
		p[l] = v;
		l++; v--;
	}

	for (int i = 0; i < n; i++)
		cout << p[i] << " \n"[i == n-1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}