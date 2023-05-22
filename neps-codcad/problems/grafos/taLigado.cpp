#include <bits/stdc++.h>

using namespace std;

set < pair<int, int> > pontes;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        int ti, ai, bi;
        cin >> ti >> ai >> bi;

        if(ti == 1) {
            pontes.insert({ai, bi});
            pontes.insert({bi, ai});
        }
        else if(ti == 0){
            if(pontes.find({ai, bi}) != pontes.end()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
    }
}