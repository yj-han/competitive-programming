// H. Torus Path
// H. Torus Path
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
	int n; cin >> n; 
	vector<vector<int>> a(n, vector<int>(n, 0));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];		
		}	
	}

	long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += accumulate(a[i].begin(), a[i].end(), 0LL);
    
    int mn = a[0][n - 1];
    for (int i = 0; i < n; i++)
        mn = min(mn, a[i][n - 1 - i]);
    
    cout << sum - mn << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t; cin >> t;
    // while (t--)
	solve();

    return 0;
}