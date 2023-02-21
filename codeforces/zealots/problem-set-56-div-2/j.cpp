// J. Required Length
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
    int n; cin >> n;
    ll v; cin >> v;
 
    queue<ll> q;
    map<ll, int> dist;
    
    dist[v] = 0;
    q.push(v);
 
    while (!q.empty()) {
        ll k = q.front();
        q.pop();
 
        string s = to_string(k);
        if (s.size() == n) {
            cout << dist[k] << endl;
            return;
        }
        for (auto x : s) {
            if (x == '0') continue;
            ll w = k * int(x - '0');
            if (!dist.count(w)) {
                dist[w] = dist[k] + 1;
                q.push(w);
            }
        }
    }
 
    cout << -1 << endl;
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    // int t; cin >> t;
    // while (t--)
    //     solve();
    solve();
        
	return 0;
}
