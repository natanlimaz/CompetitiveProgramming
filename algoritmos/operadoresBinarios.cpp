#include <bits/stdc++.h>

using namespace std;

int main() {
    // OR nos bits |
    int a = 18; // 10010
    int b = 14; // 01110
    cout << (a|b) << endl; // imprime 30 (11110)

    // AND nos bits &
    int c = 22; // 10110
    int d = 19; // 10011
    cout << (c&d) << endl; // imprime 18 (10010)

    // XOR nos bits ^
    int e = 22; // 10110
    int f = 19; // 10011
    cout << (e^f) << endl; // imprime 5 (00101)


    // Leftshift << e rightshit >>
    int g = 18; // 10010
    g <<= 4; //(288) 100100000

    int h = 22; // 10110
    h >>= 3; // (2) 010

    cout << "Leftshift: " << g << endl;
    cout << "Rightshift: " << h << endl;

    // Numeros negativos em binário
    // troca os bits do numero binario, depois soma 1

}