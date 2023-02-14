// E. Minimal Cost
#include <iostream>
#include <vector>

using namespace std;
using pi = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int ans = INT_MAX;
        int n, u, v;
	    cin >> n >> u >> v;

        vector<int> a(n+1);
	    for (int i = 1; i <= n; i++) cin >> a[i];

	    for (int i = 2; i <= n; i++) {
		    if (abs(a[i] - a[i - 1]) >= 2) 
                ans = 0;
	    	if (abs(a[i] - a[i - 1]) == 1) 
                ans = min(ans, min(u, v));
		    if (a[i] == a[i - 1]) 
                ans = min(ans, v + min(u, v));
	    }
	    cout << ans << '\n';
    }
}