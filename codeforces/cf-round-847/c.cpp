#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int t, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> indegree(n+1, 0);

        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < n-1; j++) {
                int a;
                cin >> a;
                indegree[a] += j;
            }
        }

        vector<pair<int, int> > v;
        for (int i = 1; i <= n; i++)
            v.push_back(make_pair(indegree[i], i));

        sort(v.begin(), v.end(), less<pair<int, int> >());
        for (auto x : v) {
            cout << x.second << ' ';
        }
        cout << '\n';
    }

	return 0;
}s