// G. Sum of Substrings
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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int ones = 0, p1_first = n, p1_last = -1;
    for (int p = 0; p < n; p++) {
        if (s[p] != '1')
            continue;
        ones++;
        if (p1_first == n)
            p1_first = p;
        p1_last = p;
    }

    int add = 0;
    if (ones > 0 && (n - 1 - p1_last) <= k) {
        k -= (n - 1 - p1_last);
        add++; ones--;
    }

    if (ones > 0 && p1_first <= k) {
        k -= p1_last;
        add += 10;
        ones--;
    }
    cout << 11 * ones + add << '\n';
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
