// A. GamingForces
#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> health(n);
        for (int i = 0; i < n; i++)
            cin >> health[i];
            
        cout << n - count(health.begin(), health.end(), 1)/2 << '\n';
    }
	return 0;
}