    #include <bits/stdc++.h>

    using namespace std;

    const int tam = 1.3 * 1e6;
    bool e_composto[tam];
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
        crivo(tam);
        vector<int> primos;
        int q;
        cin >> n;

        for(int i = 2; primos.size() <= n; i++) {
            if(e_composto[i] == 0) {
                primos.push_back(i);
            }
        }

        for(int i = 0; i < (int) primos.size(); i++) {
            if(primos[i] == pi) {
                cout << i+1 << endl;
                break;
            }
        }
    }