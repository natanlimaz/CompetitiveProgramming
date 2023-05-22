    #include <bits/stdc++.h>

    using namespace std;

    bool e_composto[12000005];
    vector<int> pos;

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
        crivo(12000005);
        vector<int> primos;
        int n;
        cin >> n;

        for(int i = 2; primos.size() <= n; i++) {
            if(e_composto[i] == 0) {
                primos.push_back(i);
            }
        }

        cout << primos[n - 1] << endl;
    }