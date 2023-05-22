#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int64_t x) {
    if (x == 2 || x == 3)
        return true;

    if (x == 1 || x % 2 == 0 || x % 3 == 0)
        return false;

    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int64_t n;
    cin >> n;
    if(eh_primo(n)) {
        printf("N\n");
    }
    else {
        printf("S\n");
    }
}