#include <bits/stdc++.h>

using namespace std;

queue<char> times;
char t1, t2;
int m, n;

void solve() {
	cin >> m >> n;
	t1 = times.front();
	times.pop();

	t2 = times.front();
	times.pop();

	if(m > n) {
		times.push(t1);	
	}
	else {
		times.push(t2);
	}

}

int main() {
	for(char i = 'A'; i <= 'P'; i++) {
		times.push(i);
	}

	for(int i = 0; i < 15; i++) {
		solve();
	}

	cout << times.front() << endl;
}
