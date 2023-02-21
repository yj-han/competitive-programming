// N. Number of Components
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<char, int> mci;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long ans = 0;
    for (int& x: a) {
        cin >> x;
        ans += 1LL * x * (n+1-x);
    }
    
    for (int i = 0; i+1 < n; i++) {
        int x = min(a[i], a[i+1]);
        int y = max(a[i], a[i+1]);
        ans -= 1LL*x*(n+1-y);
    }
  cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    // int t; cin >> t;
    // while (t--)
    //     solve();
    solve();
        
	return 0;
}
