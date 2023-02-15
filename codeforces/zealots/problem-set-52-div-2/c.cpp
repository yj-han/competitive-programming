// C. X-Sum
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void backtrack(int x, int y) {

}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

	int mx = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int now = 0;
			int ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m) {
				now += a[ci][cj];
				ci--;
				cj--;
			}

			ci = i, cj = j;
			while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
				now += a[ci][cj];
				ci++;
				cj--;
			}

			ci = i, cj = j;
			while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
				now += a[ci][cj];
				ci--;
				cj++;
			}

			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m) {
				now += a[ci][cj];
				ci++;
				cj++;
			}
			now -= a[i][j]*3;
			mx = max(mx, now);
		}
	}
	cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}
