#include <bits/stdc++.h>

using namespace std;

bool e_composto[10000005];

void crivo(int n) {
    e_composto[1] = 1; // 1 não é composto, mas o vetor na verdade guarda os números que não são primos
    for(int i = 2; i <= n; ++i) {
        if(!e_composto[i]) {
            for(int j = 2; j*i <= n; ++j) {
                e_composto[i*j] = 1;
            }
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    crivo(n);

    vector<int> primos;
    for(int i = 2; i <= n; i++) {
        if(!e_composto[i]) {
            primos.push_back(i);
        }
    }

    for(int i = 0; i < (int) primos.size()-1; i++) {
        cout << primos[i] << " ";
    }
    cout << primos[primos.size()-1] << endl;
}