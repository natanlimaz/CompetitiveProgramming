#include <bits/stdc++.h>

#define PB push_back

using namespace std;

int main() {
    vector<int> x;
    vector<int> y;
    vector<int> z;

    int n, sum = 0;
    cin >> n;
    while(n--) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        x.PB(xi);
        y.PB(yi);
        z.PB(zi);
    }

    int sumx = 0, sumy = 0, sumz = 0;
    for(int i = 0; (int) i < x.size(); i++) {
        sumx += x[i];
    }
    for(int i = 0; (int) i < y.size(); i++) {
        sumy += y[i];
    }
    for(int i = 0; (int) i < z.size(); i++) {
        sumz += z[i];
    }

    if(sumx == 0 && sumy == 0 && sumz == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
