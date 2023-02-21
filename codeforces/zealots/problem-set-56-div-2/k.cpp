// K. BA-String
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<char, int> mci;

void solve() {
    int n, k; cin >> n >> k;
    ll x; cin >> x; x--;
    string s; cin >> s;
    
    reverse(s.begin(), s.end());
    string t;

    int i = 0;
    while (i < n) {
        if (s[i] == 'a')
            t.push_back('a');
        else {
            int j = i;
            while (j + 1 < n && s[j+1] == s[i])
                j++;
            int cur = (j - i + 1) * k + 1;
            for (int l = 0; l < (x % cur); l++)
                t.push_back('b');
            x /= cur;
            i = j;
        }
        i++;
    }

    reverse(t.begin(), t.end());
    cout << t << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while (t--)
        solve();
    // solve();
        
	return 0;
}
