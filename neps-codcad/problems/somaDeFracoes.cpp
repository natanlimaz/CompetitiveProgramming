#include <bits/stdc++.h>

using namespace std;

int64_t mdc(int64_t a, int64_t b) {
    if(b == 0) {
        return a;
    }

    return mdc(b, a%b);
}

int64_t mmc(int64_t a, int64_t b) {
    return (a*b) / mdc(a, b);
}

int main() {
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;

    int64_t denominador = mmc(b, d);
    int64_t numerador = (denominador / b * a) + (denominador / d * c);

    int64_t numeroQueDivideOsDois = mdc(numerador, denominador); // para deixar a fração de forma irredutivel
    
    if(numerador % numeroQueDivideOsDois == 0 and denominador % numeroQueDivideOsDois == 0) {
        numerador /= numeroQueDivideOsDois;
        denominador /= numeroQueDivideOsDois;
    }

    cout << numerador << " " << denominador << endl;

}