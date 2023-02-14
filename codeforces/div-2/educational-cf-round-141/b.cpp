// B. Matrix of Differences
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
	cin >> n;
	
	vector<vector<int>> a(n, vector<int>(n));
	int l = 1, r = n * n;
	bool flag = false;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (flag) a[i][j] = l++;
			else a[i][j] = r--;
			flag = !flag;
		}
		if (i & 1) reverse(a[i].begin(), a[i].end());
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " \n"[j == n - 1];
		}
	}
	
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