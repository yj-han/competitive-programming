// B. The Forbidden Permutation
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
        int n, m, d; cin >> n >> m >> d;
        vector<int> pos(n + 1);
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            pos[x] = i;
        }

        vector<int> arr(m + 1);
        for (int i = 1; i <= m; i++)
            cin >> arr[i];
        
        int ans = 1e9;
        for (int i = 1; i < m; i++) {
            if (pos[arr[i]] >= pos[arr[i+1]] 
            || pos[arr[i+1]] > pos[arr[i]] + d) {
                ans = 0;
                break;
            }

            ans = min(ans, pos[arr[i+1]] - pos[arr[i]]);
            int dist = pos[arr[i+1]] - pos[arr[i]];
            int swap_need = d - dist + 1;
            int swap_possible = (pos[arr[i]] - 1) + (n - pos[arr[i+1]]);
            if (swap_possible >= swap_need)
                ans = min(ans, swap_need);
        }

        cout << ans << '\n';
    }

	return 0;
}