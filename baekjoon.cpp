
#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    priority_queue<int> positive_heap;
    priority_queue<int> negative_heap;
    
    while (n--) {
        int x;
        cin >> x;

        if (x > 0) {
            positive_heap.push(-x);
        } else if (x < 0) {
            negative_heap.push(x);
        } else {
            if (positive_heap.empty() && negative_heap.empty()) {
                cout << 0 << '\n';
                continue;
            }
            
            if (positive_heap.empty()) {
                int min_abs = negative_heap.top();
                negative_heap.pop();
                cout << min_abs << '\n';
            } else if (negative_heap.empty()) {
                int min_abs = positive_heap.top();
                positive_heap.pop();
                cout << -min_abs << '\n';
            } else {
                int positive_min = positive_heap.top();
                int negative_min = negative_heap.top();

                if (abs(positive_min) < abs(negative_min)) {
                    positive_heap.pop();
                    cout << -positive_min << '\n';
                } else {
                    negative_heap.pop();
                    cout << negative_min << '\n';
                }
            }
        }
    }
}