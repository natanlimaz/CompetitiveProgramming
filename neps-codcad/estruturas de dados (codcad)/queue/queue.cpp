#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> fila;
	int i = 10;
	while(i--) {
		int x; cin >> x;
		fila.push(x);
	}

	while(!fila.empty()) {
		cout << fila.front() << " ";
		fila.pop();
	}
}
