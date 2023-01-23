#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

#define MAX_VALUE 10000001
#define INF 1000000000

int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    cin >> n;

    stack<pair<int, int> > stk;
    int nge[n+1];

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        while (!stk.empty() && stk.top().first < x) {
            nge[stk.top().second] = x;
            stk.pop();
        }
        stk.push(make_pair(x, i));
    }

    while (!stk.empty()) {
        nge[stk.top().second] = -1;
        stk.pop();
    }

    for (int i = 1; i <= n; i++)
        cout << nge[i] << ' ';
}
