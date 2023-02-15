// A. Squares and Cubes
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;

	set<int> a;
	for (int i = 1; i * i <= n; i++)
		a.insert(i * i);

	for (int i = 1; i * i * i <= n; i++)
		a.insert(i * i * i);

	cout << a.size() << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}