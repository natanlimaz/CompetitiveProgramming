#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0, n;

    cin >> n;
    while (n--) {
        string op;
        cin >> op;
        if(op[1] == '+') {
            x++;
        }
        else {
            x--;
        }
    }

    cout << x << endl;
    

}