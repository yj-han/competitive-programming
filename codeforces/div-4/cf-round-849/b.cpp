// B - Following Directions
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
        
        bool pass = false;
        int x = 0;
        int y = 0;
        
        string s; cin >> s;
        for (auto c : s) {
            if (c == 'U') {
                y += 1;
            } else if (c == 'R') {
                x += 1;
            } else if (c == 'L') {
                x -= 1;
            } else {
                y -=1;
            }
 
            if (x == 1 && y == 1) {
                pass = true;
                cout << "YES" << '\n';
                break;
            }
        }
 
        if (!pass) {
            cout << "NO" << '\n';
        }
    }
 
	return 0;
}