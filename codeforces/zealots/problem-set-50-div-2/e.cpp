// E. Matryoshkas
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        set<int> b;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            cnt[a[i]]++;
            b.insert(a[i]);
            b.insert(a[i] + 1);
        }
        int last = 0;
        int res = 0;
        for (auto x: b) {
            int c = cnt[x];
            res += max(0, c - last);
            last = c;
        }
        cout << res << '\n';
    }
}