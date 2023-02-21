// C. Different Differences
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int k, n; cin >> k >> n;
        vector<int> diff(k-1, 1);
        int rem = n - k;
        int pos = 1;
        while (pos < k - 1 && rem) {
            diff[pos] += min(pos, rem);
            rem -= min(pos, rem);
            pos++;
        }

        vector<int> ans;
        ans.push_back(1);
        for (int i = 1; i < k; i++)
            ans.push_back(diff[i-1] + ans[i-1]);

        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
}