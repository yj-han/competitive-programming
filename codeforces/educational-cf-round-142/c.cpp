// C. Min Max Sort
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            x--;
            p[x] = i;
        }
        
        int ans = 0;
        for (int l = n/2-1, r = (n+1)/2; l >=0; l--, r++) {
            if (p[l] > p[r] || p[l] > p[l+1] || p[r] < p[r-1]) {
                ans = l + 1;
                break;
            }
        }

		cout << ans << '\n';
    }
	return 0;
}