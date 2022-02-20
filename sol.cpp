#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mx = x;
		for (int i = 0; i < n; i++) {
			x += a[i]; // add or subtract (depends on the value)
			mx = max(mx, x); // find the maximum at any point in time
		}
		cout << mx << '\n';
	}
	return 0;
}