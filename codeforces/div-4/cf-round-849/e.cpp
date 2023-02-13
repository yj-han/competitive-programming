// E. Negatives and Positives
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;
 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
 
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        long long sum = 0;
        int negs = 0;

        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] < 0) {
                ++negs;
                a[i] = -a[i];
            }
            sum += a[i];
        }
        sort(a.begin(), a.end());

        if(negs & 1) 
            sum -= 2 * a[0];
        cout << sum << "\n";
    }
    
	return 0;
}