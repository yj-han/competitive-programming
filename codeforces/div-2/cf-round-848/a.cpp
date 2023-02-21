// A. Flip Flip Sum
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n + 1];
        int sum = 0, ans = -1e9;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i + 1]) {
                if (arr[i] == 1) ans = max(ans, sum - 4);
                else ans = max(ans, sum + 4);
            } else {
                ans = max(ans, sum);
            }
        }

        cout << ans << '\n';
    }

	return 0;
}