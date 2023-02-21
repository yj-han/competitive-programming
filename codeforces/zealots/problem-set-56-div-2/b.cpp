// B. Rule of League
#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

void solve() {
    int n, x, y; cin >> n >> x >> y;

    if (x > y) swap(x, y);
    if (x || !y || (n - 1) % y) {
        cout << -1 << '\n';
        return;
    }

    for (int k = 2; k <= n; k += y) {
        for (int i = 1; i <= y; i++) cout << k << ' ';
    }
    cout << '\n';
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
