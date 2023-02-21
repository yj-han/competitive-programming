// E. Build the Permutation
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
    int n, a, b; cin >> n >> a >> b;

    if (a + b > n - 2 || abs(a-b) > 1) {
        cout << -1 << '\n';
        return;
    }

    vi p(n + 1);
    for (int i = 1; i <= n; i++) p[i] = i;

    if (a == b) {
        for (int i = 1; i <= a; i++)
            swap(p[2 * i], p[2 * i + 1]);
    } else if (a < b) {
        for (int i = 1; i <= b; i++)
            swap(p[2 * i - 1], p[2 * i]);
    } else {
        for (int i = 1; i <= a; i++)
            swap(p[n - 2*i+2], p[n - 2*i+1]);
    }

    for (int i = 1; i <= n; i++)
        cout << p[i] << " \n"[i == n];
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
