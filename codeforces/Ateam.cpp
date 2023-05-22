#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    while(n--) {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        if(a1 == 0 and a2 == 1 and a3 == 1) {
            ans++;
        }
        else if(a1 == 1 and a2 == 1 and a3 == 0) {
            ans++;
        }
        else if(a1 == 1 and a2 == 0 and a3 == 1) {
            ans++;
        }
        else if(a1 == 1 and a2 == 1 and a3 == 1) {
            ans++;
        }
    }

    cout << ans << endl;
}