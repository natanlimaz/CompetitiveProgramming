#include <bits/stdc++.h>

using namespace std;

// Contar o numero de bits iguais a 1
int count_bits(int64_t x) {
    int ret = 0;
    while(x != 0) {
        ++ret;
        x -= x&-x;
    }

    return ret;
}

int main() {
    int64_t n;
    cin >> n;

    cout << count_bits(n) << endl;
}