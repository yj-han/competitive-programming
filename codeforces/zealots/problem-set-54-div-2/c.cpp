// C. Scenes From a Memory
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
    int k; cin >> k;
    string n; cin >> n;

    si primes = {2, 3, 5, 7, 23, 37, 53, 73};
    int ans = 0;
    int max_v = 0;
    map<char, int> mci;

    string s;
    for (int i = 0; i < k; i++) {
        if (primes.find(n[i] - '0') == primes.end()) {
            ans = 1;
            max_v = max(max_v, n[i] - '0');
        } else {
            s.push_back(n[i]);
        }
    }
    if (ans > 0 && max_v > 0) {
        cout << ans << '\n';
        cout << max_v << '\n';
        return;
    } else {
        ans = 2;
        int i = 0, j = s.size() - 1;
        for (int i = 0; i < s.size()-1; i++) {
            for (int j = i + 1; j < s.size(); j++) {
                int num = (s[i] - '0') * 10 + (s[j] - '0');
                if (primes.find(num) == primes.end()) {
                    cout << 2 << '\n';
                    cout << num << '\n';
                    return;
                }
            }
        }
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
