#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<pair<int, int>> v(10004);
    for(int i = 0; i < 10004; i++) {
        v[i] = make_pair(0, 0);
    }


    cin >> n;
    while(n--) {
        int m;
        char l;
        cin >> m >> l;
        if(l == 'D')
            v[m].second++;
        if(l == 'E')
            v[m].first++;
    } 

    int totPares = 0;
    for(int i = 0; i < 10004; i++) {
        if(v[i].first > 0 and v[i].second > 0) {
            totPares += min(v[i].first, v[i].second);
        }
    }

    cout << totPares << endl;
}