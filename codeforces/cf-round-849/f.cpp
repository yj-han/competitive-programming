// F - Range Update Point Query
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <memory.h>
 
using namespace std;
using ll = long long;
const int MAX_N = 200000;
 
int n, t[4 * MAX_N];
 
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = 0;
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
    }
}
 
int get(int v, int tl, int tr, int pos) {
    if (tl == tr)
        return t[v];
    int tm = (tl + tr) / 2;
    if (pos <= tm)
        return t[v] + get(v*2, tl, tm, pos);
    else
        return t[v] + get(v*2+1, tm+1, tr, pos);
}
 
void update(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return;
    if (l == tl && r == tr) {
        t[v]++;
    } else {
        int tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, min(r, tm));
        update(v*2+1, tm+1, tr, max(l, tm+1), r);
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T; cin >> T;
    while (T--) {
        int q;
        cin >> n >> q;
        
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        memset(t, 0, sizeof(t));
        build(arr, 1, 0, n-1);
 
        for (int i = 0; i < q; i++) {
            int c;
            cin >> c;
            if (c == 1) {
                int l, r; cin >> l >> r;
                l--;
                r--;
                update(1, 0, n-1, l, r);
            } else {
                int x;
                cin >> x;
                x--;
 
                int cnt = get(1, 0, n-1, x);
                cnt = cnt > 3? 3: cnt;
                int num = arr[x];
                while (cnt--) {
                    int sum = 0;
                    while (num) {
                        sum += num % 10;
                        num /= 10;
                    }
                    num = sum;
                }
                cout << num << '\n';
            }
        }
 
    }
 
	return 0;
}