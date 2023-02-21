// D. Mirror in the String
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
using pi = pair<int, int>;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 1;
    
    while (k < n && (s[k] < s[k - 1] || (k > 1 && s[k] == s[k - 1])))
      ++k;

    for (int i = 0; i < k; i++)
      cout << s[i];

    for (int i = k - 1; i >= 0; i--)
      cout << s[i];

    cout << '\n';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
 
    return 0;
}