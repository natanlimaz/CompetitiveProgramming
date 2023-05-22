#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, w;
    int64_t n, total_price = 0;

    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++) {
        total_price += i * k;
    }

    if(total_price - n >= 0) {
        cout << total_price - n << endl;
    }
    else {
        cout << "0" << endl;
    }
}