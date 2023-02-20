// E. Morning Jogging
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<char, int> mci;

const int INF = 1e9 + 1;

void solve() {
    int n, m; cin >> n >> m;
    vii path;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            path.push_back({x, i});
        }
    }

    sort(path.begin(), path.end());
    vector<vector<int>> runner(m, vector<int> (n, INF));
    for (int i = 0; i < m; i++) {
        ii opt_path = path[i];
        runner[i][opt_path.second] = opt_path.first;
    }

    for (int i = m; i < path.size(); i++) {
        int num = 0;
        ii opt_path = path[i];
        while (runner[num][opt_path.second] != INF) num++;
        runner[num][opt_path.second] = opt_path.first;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << runner[j][i] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }

        
	return 0;
}
