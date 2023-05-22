#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vetor = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};
    int prefix_sum[vetor.size()] = {0};

    prefix_sum[0] = vetor[0];

    for(int i = 1; i < vetor.size(); i++) {
        prefix_sum[i] = prefix_sum[i-1] + vetor[i];
    }

    cout << "Vetor -> ";
    for(auto i : vetor) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Prefix_sum -> ";
    for(int i = 0; i < vetor.size(); i++) {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;
}

