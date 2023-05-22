#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5;

int main() {
    int ors[maxn];
    memset(ors, 0, sizeof(ors));

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> ors[i];
    }


    int orr = ors[0]|ors[1];
    for(int i = 2; i < n; i++) {
        orr = (orr|ors[i]);
    }

    cout << orr << endl;
}