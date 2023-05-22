#include <bits/stdc++.h>

#define MAXN 100005 

using namespace std;


int main() {
    int v[MAXN];
    int prefix_sum[MAXN];
    memset(v, 0, sizeof(v));
    memset(prefix_sum, 0, sizeof(prefix_sum));

    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        int x; cin >> x;
        v[i] = x;
        if(i == 1) {
            prefix_sum[i] = v[i];
        }
        else {
            prefix_sum[i] = prefix_sum[i-1] + v[i];
        }
    }

    int Q, i, j;
    cin >> Q;
    while(Q--) {
        cin >> i >> j;
        i++;
        j++;
        cout << prefix_sum[j] - prefix_sum[i-1] << endl;
    }
}