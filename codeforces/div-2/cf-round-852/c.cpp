// C. Dora and Search
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;
using pi = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n+1);
        for (int i = 1; i <= n; i++) cin >> arr[i];

        int l = 1, r = n;
        int min_val = 1; int max_val = n;
        while (l < r) {
            if (arr[l] <= min_val) {
                min_val++;
                l++;
            } else if (arr[l] >= max_val) {
                max_val--;
                l++;
            } else if (arr[r] <= min_val) {
                min_val++;
                r--;
            } else if (arr[r] >= max_val) {
                max_val--;
                r--;
            } else {
                break;
            }
        }

        if (l >= r) cout << -1 << '\n';
        else cout << l << ' ' << r << '\n';
    }
    return 0;
}

