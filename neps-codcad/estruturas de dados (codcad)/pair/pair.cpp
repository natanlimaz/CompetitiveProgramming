#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector< pair<int, string> > V;
    int a;
    string b;

    for(int i = 1; i < 10; i++) {
        cin >> a >> b;
        V.push_back(make_pair(a, b));
    }

    sort(V.begin(), V.end());
}