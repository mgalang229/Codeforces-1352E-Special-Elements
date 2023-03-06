#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
	int n;
	cin >> n;
	int a[n], cnt[n+1];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	int ans = 0;
	for (int l = 0; l < n; l++) {
		int sum = 0;
		for (int r = l; r < n; r++) {
			sum += a[r];
			if (l == r)
				continue;
			if (sum <= n) {
				ans += cnt[sum];
				cnt[sum] = 0;
			}
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
