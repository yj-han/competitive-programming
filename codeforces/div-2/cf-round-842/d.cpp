// D. Lucky Permutation
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i]; p[i]--;
	}
	
	int ind = 1, ans = 0;
	vector<int> comp(n, 0);
	for (int i = 0; i < n; i++) {
		if (comp[i]) continue;
		{
			int v = i;
			while (comp[v] == 0) {
				comp[v] = ind;
				v = p[v];
				ans++;
			}
			
			ind++; ans--;
		}
	}
	
	for (int i = 0; i < n - 1; i++) {
		if (comp[i] == comp[i + 1]) {
			cout << ans - 1 << '\n';
			return;
		}
	}
	cout << ans + 1 << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}