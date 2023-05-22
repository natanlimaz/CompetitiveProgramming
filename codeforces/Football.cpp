#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 1;
    for(int i = 0; i < (int) s.size() - 1; i++) {
        if(s[i] == s[i + 1]) {
            ans++;
        }
        else {
            ans = 1;
        }

        if(ans == 7) break;
    }

    if(ans == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}