// D. Shifting Sort
#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

struct action {
	int l, r, d;
};

void solve() {
    int n; cin >> n;
	vector<int> a(n+1);
	multiset<int> s;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}

	vector<action> ans;
	int l = 1, r = 2, d = 1;
	while (l <= n) {
		if (a[l] == (*s.begin())) {
			l++;
			s.erase(s.begin());
		} else {
			r = l + 1;
			while (r <= n && a[r] != (*s.begin())) r++;

			d = r - l;
			int shift = a[r];
			for (int j = r; j > l; j--)
				a[j] = a[j-1];

			a[l] = shift;
			ans.push_back({l, r, d});
		}
	}

	cout << ans.size() << '\n';
	for (auto a : ans)
		cout << a.l << ' ' << a.r << ' ' << a.d << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}
