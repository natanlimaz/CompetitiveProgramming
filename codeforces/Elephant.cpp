#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    while(n > 0) {
        if(n - 5 >= 0) {
            n -= 5;
            ans++;
        }
        else if(n - 4 >= 0) {
            n -= 4;
            ans++;
        }
        else if(n - 3 >= 0) {
            n -= 4;
            ans++;
        }
        else if(n - 2 >= 0) {
            n -= 2;
            ans++;
        }
        else if(n - 1 >= 0) {
            n -= 1;
            ans++;
        }
    }

    cout << ans << endl;
}