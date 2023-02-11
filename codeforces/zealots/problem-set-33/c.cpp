// C - Ticks
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
using pi = pair<int, int>;

int main() {
    // io setting
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        // handling input
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> field(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c; cin >> c;
                if (c == '*')
                    field[i][j] = 1;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < m; j++) {
                if (field[i][j] == 0)
                    continue;

                // find the center (i, j) and the size d
                int d = 0;
                while (j > d && j + d + 1 < m && i > d) {
                    if (field[i - (d + 1)][j - (d + 1)] == 0 || field[i - (d + 1)][j + d + 1] == 0)
                        break;
                    d++;
                }

                // mark valid cells including the centers
                if (d >= k) {
                    for (int h = 0; h <= d; h++) {
                        field[i - h][j - h] = 2;
                        field[i - h][j + h] = 2;
                    }
                }
            }
        }

        // determine the validty of the field
        bool ok = true;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (field[i][j] == 1)
                    ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }
}