// A - Codeforces Checking
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
 
    string s = "codeforces";
    while (t--) {
        char c; cin >> c;
        if (s.find(c) != string::npos) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
 
	return 0;
}