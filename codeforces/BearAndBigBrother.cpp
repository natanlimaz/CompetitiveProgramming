#include <bits/stdc++.h>

using namespace std;

void solve() {

}

int main() {
    int limak, bob, ans = 0;
    cin >> limak >> bob;
    while(limak <= bob) {
        limak *= 3;
        bob *= 2;
        ans++;
    }

    cout << ans << endl;
}
