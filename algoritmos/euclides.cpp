#include <iostream>

using namespace std;

int mdc(int a, int b) {
    if(b == 0) {
        return a;
    }

    return mdc(b, a%b);
}
/* usando comparador ternario, o codigo acima pode ser escrito de forma reduzida da seguinte forma*/
/*
int mdc(int a, int b) {
    return (b == 0 ? a : mdc(b, a%b));
}
*/

// sabendo do algoritmo de euclides, podemos fazer o mmc como mmc(a, b) = (a*b) / mdc(a, b)
int mmc(int a, int b) {
    return (a*b)/mdc(a, b);
}

int main() {
    cout << "O MDC de 348 e 156 eh: " << mdc(348, 156) << endl;
    cout << "O MMC de 348 e 156 eh: " << mmc(348, 156) << endl;
}