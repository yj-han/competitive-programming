// C. Distinct Split
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
    int n; string s; cin >> n >> s;
    mci a, b;
    
    for (auto x : s) 
        a[x]++;

    int ans = 0;
    for (auto x : s) {
        --a[x];
        ++b[x];

        int curr = 0;
        for (auto it : a)
            curr += min(1, it.second);
        
        for (auto it : b)
            curr += min(1, it.second);
        ans = max(curr, ans);
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
