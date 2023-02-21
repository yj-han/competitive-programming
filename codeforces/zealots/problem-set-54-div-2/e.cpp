// E. Minimal Cost
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

void solve() {
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;

    while (t--)
        solve();
        
	return 0;
}
