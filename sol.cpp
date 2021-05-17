#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int total_song = 0;
	int cnt = 0;
	int id = 0;
	while (id < n) {
		// add the minutes of the current song to the 'total_song'
		total_song += a[id++];
		if (id < n) {
			// if it's not the last element, then we need to add the 10 minutes break
			// which are made up of 2 jokes (that will be added to 'cnt')
			total_song += 10;
			cnt += 2;
		}
	}
	if (total_song <= d) {
		// if the total minutes of all the songs (including the breaks) is less than
		// or equal to 'd', then subtract this from 'd', to get the remaining minutes 
		// left (if there are any) and divide it by 5 to get the number of extra jokes
		// to be performed to fulfill 'd' minutes of time
		d -= total_song;
		cout << cnt + (d / 5);
	} else {
		// otherwise, if it is not possible to find a way to conduct all the songs 
		// of the Devu, print -1
		cout << -1;
	}
	cout << '\n';
	return 0;
}
