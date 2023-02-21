// E. Multiples and Power Differences
#include <iostream>
 
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm() {
    int l = 1;
    for (int i = 2; i <= 16; i++) {
        l = l * i / gcd(l, i); 
    }
    return l;
}
 
int main() {
	int n, m; cin >> n >> m;
    
    int l = lcm();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
            int a; cin >> a;
            int b;
            if ((i ^ j) & 1)
                b = l;
            else
                b = l + a * a * a * a;
            
            cout << b << ' ';
        }
        cout << '\n';
    }
	return 0;
}