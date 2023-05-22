#include <bits/stdc++.h>
#include <bitset>

using namespace std;
string number_to_binary;

// o(log n)
// aqui uso divisoes sucessivas para transformar o numero n em binario
// vai armazenar o numero ao contrario porem so estou ligando para o tanto de bits q ele tem(entao a ordem n importa), mas se eu quiser ele corretamente, eh so eu inverter esssa string q assim terei realmente o numero em binario
void to_binary(int64_t n) {
    bool ret = true;
    while(n != 0) {
        int r = n % 2;
        number_to_binary.push_back((r) + '0'); // r - '0' eh so para converter um numero em char, para por ele na string
        n /= 2;
    }
}

int main() {
    int64_t n;
    cin >> n;

    to_binary(n);

    //se a string eh composta por 0 e 1, se eu ordenar e tiver 0, ele vai estar na primeira posicao, se eu ordenar e a primeira posicao for 1, entao ele nao tem zeros;
    sort(number_to_binary.begin(), number_to_binary.end());
    
    if(number_to_binary[0] == '1') {
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }
}