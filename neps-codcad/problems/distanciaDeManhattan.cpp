#include <bits/stdc++.h>

int dist(int xm, int ym, int xr, int yr) {
    return pow(xr-xm, 1) + pow(yr-ym, 1);
}

using namespace std;

int main() {
    int xm, ym, xr, yr;
    cin >> xm >> ym >> xr >> yr;

    if(xm == 0 and ym == 0) {
        cout << xr + yr << endl;
    }
    else if(xr == 0 and yr == 0) {
        cout << xm + ym << endl;
    }
    else {
        cout << dist(xm, ym, xr, yr) << endl;
    }
}