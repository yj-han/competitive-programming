// C - Prepend and Append
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
using ll = long long;
 
int t, n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> t;
 
    while (t--) {
        cin >> n;
        string s; cin >> s;
        int cnt = n;
 
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[n-i-1]) {
                cnt -= 2;
            } else {
                break;
            }
        }
 
        cout << cnt << '\n';
    }
 
	return 0;
}