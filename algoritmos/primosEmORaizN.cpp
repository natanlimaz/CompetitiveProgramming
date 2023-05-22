// código para saber se um deaterminado numero eh primo, em complexidade O(raiz de n), bem mais rápido que o(n)
#include <bits/stdc++.h>

using namespace std;

bool e_primo(int x) {
    if(x == 1) return 0;
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

}