// D. Train and Queries
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<char, int> mci;

bool find_route(int a, int b, vi &u, vi idx[]) {
    if (a == b)
        return true;
    
    int l = lower_bound(idx[b].begin(), idx[b].end(), idx[a][0]) - idx[b].begin();
    if (l != idx[b].size())
        return true;

    return false;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> u(n);
    vector<int> idx[n];
    mii comp;

    for (int i = 0; i < n; i++) {
        cin >> u[i];

        if (comp.find(u[i]) == comp.end())
            comp[u[i]] = comp.size();
        u[i] = comp[u[i]];
        
        idx[u[i]].push_back(i);
    }

    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        
        if (comp.find(a) == comp.end() || comp.find(b) == comp.end())
            cout << "NO\n";
        else {
            a = comp[a];
            b = comp[b];
            cout << (find_route(a, b, u, idx) ? "YES\n" : "NO\n");
        } 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }

        
	return 0;
}
