#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;
	cout << n;
	while (1 < n) {
		if (0 == n % 2) {
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}

		cout << ' ' << n;
	}

	return 0;
}