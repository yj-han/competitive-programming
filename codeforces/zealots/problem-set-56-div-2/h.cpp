// H. Replace With the Previous, Minimize
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
    int n,k; cin >> n >> k;
    string s; cin >> s;
 
    char mn = 'a';
    for (int i = 0; i < n; i++) {
        if (s[i] > mn) {
            if (s[i] - 'a' > k) {
                k -= mn - 'a';
                int to = s[i] - k;
                for (char c = s[i]; c > to; c--) {
                    for (char &e : s) {
                        if (e == c) {
                            e = char(c-1);
                        }
                    }
                }
                break;
            } else
                mn = max(mn, s[i]);
        }
    }
    
    for (char &e:s) {
        if (e <= mn)
            e = 'a';
    }
    cout << s << endl;
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