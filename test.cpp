#include <iostream>

void solve() {

	std::cout << "Hello World!" << std::endl;

}

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t = 1;
	// std::cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
