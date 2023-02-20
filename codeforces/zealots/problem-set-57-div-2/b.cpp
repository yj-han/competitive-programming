// B. Make AP
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
    ll a, b, c;
    cin >> a >> b >> c;

    if (2 * b - c > 0 && (2 * b - c) % a == 0) {
        cout << "YES\n";
        return;
    }
    if (2 * b - a > 0 && (2 * b - a) % c == 0) {
        cout << "YES\n";
        return;        
    }
    
    if ((a + c) % (2 * b) == 0) {
        cout << "YES\n";
        return;        
    }
    
    cout << "NO\n";
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
