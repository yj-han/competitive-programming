// D. Array Recovery
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
    int n; cin >> n;
    vector<int> d(n + 1);
    vector<int> a(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }

    a[1] = d[1];
    int pos = 2;

    for (int i = 2; i <= n; i++) {
        if (d[i] == 0) {
            a[i] = a[i-1];
        } else {
            int a1 = d[i] + a[i-1];
            int a2 = a[i-1] - d[i];

            if (a1 > a2) 
                swap(a1, a2);
                
            if (a1 < 0 && a2 > 0) 
                a[i] = a2;
            else {
                cout << -1 << '\n';
                return;
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];
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
