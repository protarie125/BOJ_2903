#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto p = 2;
	auto add = 1;
	for (int i = 0; i < n; ++i) {
		p += add;
		add *= 2;
	}

	cout << p * p;

	return 0;
}