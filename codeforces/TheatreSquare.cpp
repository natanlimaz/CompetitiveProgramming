#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t n, m, a;
    cin >> n >> m >> a;

    int64_t ans = ceil((double) m/a) * ceil( (double) n/a);
    cout << ans << endl;
}