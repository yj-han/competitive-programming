// G. awoo's Favorite Problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s, t;

    cin >> s >> t;
    if (s == t) {
        cout << "YES\n";
        return;
    }

    string sac, tac;
    vector<int> s_aidx, t_aidx;
    vector<int> s_cidx, t_cidx;
    for (int i = 0; i < n; i++) {
        if (s[i] != 'b') sac.push_back(s[i]);
        if (t[i] != 'b') tac.push_back(t[i]);

        if (s[i] == 'a') s_aidx.push_back(i);
        if (s[i] == 'c') s_cidx.push_back(i);

        if (t[i] == 'a') t_aidx.push_back(i);
        if (t[i] == 'c') t_cidx.push_back(i);
    }

    if (sac != tac) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < s_aidx.size(); i++) {
        if (s_aidx[i] > t_aidx[i]) {
            cout << "NO\n";
            return;
        }
    }

    for (int i = 0; i < s_cidx.size(); i++) {
        if (s_cidx[i] < t_cidx[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
    // solve();

    return 0;
}
