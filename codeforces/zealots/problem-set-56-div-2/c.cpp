// C. Reverse Sort
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
    int n;
    string s;
    cin >> n >> s;
    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << '\n';
        return;
    }

    string t = s;
    sort(t.begin(), t.end());
    cout << 1 << '\n';

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i])
            ans.push_back(i+1);
    }

    cout << ans.size() << ' ';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i + 1 == ans.size()];

    return;
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
