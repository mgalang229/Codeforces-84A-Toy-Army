#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// view the image in this repository for better understanding
	// in order to complete a turn, the players must complete the 3-steps
	// that was stated in the problem statement
	// by simulating the game, this pattern will be created:
	// 2 -> 3
	// 4 -> 6
	// 6 -> 9
	// ...
	// as we can observe above, for every 'n', its factor with 2 should be
	// multiplied to 3 to produce the correct answer
	cout << (n / 2) * 3 << '\n';
	return 0;
}
