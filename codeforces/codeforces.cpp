
#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
	return a + b < b + a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, j, k;
	int n, m;

	cin >> n;

	string *s = new string[n];
	for (i = 0; i < n; i++)
		cin >> s[i];

	sort(s, s + n, cmp);

	for (i = 0; i < n; i++)
		cout << s[i];

	return 0;
}