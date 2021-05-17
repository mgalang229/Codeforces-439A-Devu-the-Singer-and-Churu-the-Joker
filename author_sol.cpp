#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	int sum = 0;
	// view the image in this repository for derivation of formula
	for (int i = 0; i < n; i++) {
		int minutes;
		cin >> minutes;
		sum += minutes;
	}
	if (sum + 10 * (n - 1) > d) {
		// if the total time of performance (songs + jokes) is greater than 'd'
		// then print -1 (it's not possible to complete all songs)
		cout << - 1;
	} else {
		// otherwise, get the difference of 'd' (duration of event) and sum (total time
		// of Devu's songs in minutes) and divide it by 5 to find the number of jokes
		// that can be performed by the joker in the event
		cout << (d - sum) / 5;
	}
	cout << '\n';
	return 0;
}
