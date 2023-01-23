#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;


int t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        int n;

        cin >> n;
        int a[n];
        int b[n];
        
        for (int i = 0; i < n; i++)
            cin >> a[i];
            
        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        bool possible = true;
        int consecutive = 0;
        int i = 0;

        while (i < n) {
            if (a[i] == b[i]) {
                if (consecutive && consecutive != b[i]) {
                    possible = false;
                    break;                    
                } else if (consecutive && consecutive == b[i]) {
                    consecutive = 0;
                }
                i++;
            } else {
                if (consecutive && consecutive != b[i]) {
                    possible = false;
                    break;
                } else if (consecutive && consecutive == a[i]) {
                    consecutive = b[i];
                }
                consecutive = b[i];
                i++;
            }
        }
        
        if (consecutive && consecutive != a[0])
            possible = false;
        cout << (possible ? "Yes" : "No") <<'\n';
    }
    return 0;
}
