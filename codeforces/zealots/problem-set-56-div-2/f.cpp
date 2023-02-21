// F. Nastia and a Good Array
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
    int n; cin >> n;
    int x = 1e9 + 7, pos = -1;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < x) x = a, pos = i;
    }

    cout << n - 1 << '\n';
    for (int i = 0; i < n; i++) {
        if (i == pos) continue;
        cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(i - pos) << '\n';
    }
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
