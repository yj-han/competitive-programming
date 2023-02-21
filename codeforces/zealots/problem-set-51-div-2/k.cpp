// K. Lucky Permutation
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
	
	int ind = 1;
	vector<int> dsu(n, 0);
	for (int i = 0; i < n; i++) {
		if (dsu[i])
            continue;
        int v = i;
        while (dsu[v] == 0) { // check cycles
            dsu[v] = ind;
            v = p[v];
        }
        ind++;
	}
	
    ind--;
	for (int i = 0; i < n - 1; i++) {
		if (dsu[i] == dsu[i + 1]) { // cylcles are splitted
			cout << n - ind - 1 << '\n';
			return;
		}
	}
	cout << n - ind + 1 << '\n';
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