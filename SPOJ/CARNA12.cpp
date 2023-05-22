#include <bits/stdc++.h>

using namespace std;
vector<double> n = {0.0, 0.0, 0.0, 0.0, 0.0};

void selection_sort() {
    for(int pos = 0; pos < 5; pos++){
        double menor = 999999999.;
        int indiceMenor;
        for(int i = pos; i < 5; i++) {
            if(n[i] < menor) {
                menor = n[i];
                indiceMenor = i;
            }
        }
        n[indiceMenor] = n[pos];
        n[pos] = menor;

    }
}

int main() {
    
    double prefix_sum[6];
    memset(prefix_sum, 0.0, sizeof(prefix_sum));

    for(int i = 0; i < 5; i++) {
        cin >> n[i];
        if(i == 0) {
            prefix_sum[i] = n[i];
        }
        else {
            prefix_sum[i] = prefix_sum[i-1] + n[i];
        }
    }

    selection_sort();

    double ans = prefix_sum[5-1] - n[0] - n[n.size() - 1];

    cout.precision(1);
    cout.setf(ios::fixed);
    cout << ans << endl;
}