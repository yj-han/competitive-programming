// I. Good Key, Bad Key
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

void solve() {
    int n, k; cin >> n >> k;
    vi a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0, sum = 0;
    for (int i = -1; i < n; i++) {
        ll now = sum;
        for (int j = i + 1; j < min(n, i + 32); j++) {
            int copy = a[j];
            copy >>= j - i;
            now += copy;
        }
        ans = max(ans, now);
        if (i + 1 != n) {
            sum += a[i+1] - k;
        }
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
