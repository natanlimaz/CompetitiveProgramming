#include <bits/stdc++.h>

using namespace std;

int euclides(int a, int b) {
    if(b == 0) {
        return a;
    }

    return euclides(b, a%b);
}

int main() {
    int n, a[100005] = {0};
    cin >> n;
    vector<int> mdc;
    for(int i = 0; i < n; i++) {
        cin >> a[i];;
    }

    for(int i = 0; i < n-1; i++) {
        mdc.push_back(euclides(a[i], a[i+1]));
    }


    for(int i = 0; i < n-1; i++) {
        sort(mdc.begin(), mdc.end());    
    }

    cout << mdc.front() << endl;
}