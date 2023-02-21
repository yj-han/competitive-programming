// B. Gardener and the Array
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> c(n);
    map<int, int> cnt;

    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            int x; cin >> x;
            c[i].push_back(x);
            cnt[x]++;
        }
    }

    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (auto x : c[i]) {
            if (cnt[x] == 1) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
}