// G. Fillomino 2
#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n; 
	vector<int> p(n);
	for (int i = 0; i < n; i++)
    	cin >> p[i];
		
	vector<vector<int>> a(n, vector<int>(n, -1));
	
	for (int i = 0; i < n; i++) {
    	int x = i;
    	int y = i;
		a[x][y] = p[i];
		for (int it = 1; it < p[i]; it++) {
			if (y > 0 && a[x][y - 1] == -1) --y;
            else ++x;
			a[x][y] = p[i];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
            if (j > 0)
                cout << " ";
            cout << a[i][j];
		}
		cout << '\n';
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t; cin >> t;
    // while (t--)
	solve();

    return 0;
}