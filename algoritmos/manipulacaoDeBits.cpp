#include <iostream>
#include <algorithm>

using namespace std;

// funcao que checa se um dado bit está ligado
/*
    Note que uma potência de 2 tem sempre apenas um bit igual a 1, dessa forma se queremos saber se
    o bit i está igual a 1, precisamos apenas checar se o and dele e de 2^i é diferente de 0
*/
bool is_set(int x, int i) {
    bool ret = ((x&(1 << i)) != 0);
    return  ret;
}


// funcao que extrai o bit menos significante (lsb)
/*
    o negativo de um número é só trocar os bits do número e somar 1 a isso, dessa forma os lsb dos dois números são iguais,
    porém todos os bits maiores que o lsb deles serão diferentes, ou seja, os números tem vários 0's,
    depois tem o lsb e em seguida tem vários bits que estão setados em exatamente um dos dois números, assim,
    basta retornamos o and dos bits entre o número e o negativo desse número.
*/
int lsb(int x) {
    return x&-x;
}


// Contar o numero de bits iguais a 1
int count_bits(int x) {
    int ret = 0;
    while(x != 0) {
        ++ret;
        x -= x&-x;
    }

    return ret;
}


// Checar se um número é uma potência de 2:
/*
    Checamos se o número é 0, se não for vemos se ele
    tem algum bit em comum com o valor logo antes dele, pois se ele for uma potência de 2, digamos 2^i,
    então o único bit igual a 1 é o i, enquanto o valor logo antes dele tem todos os bits menores que i
    iguais a 1, assim o And deles será igual a 0.
*/
bool is_power_of_two(int x) {
    if(x == 0) return 0;
    return ((x&(x - 1)) == 0);
}

int main() {
    //Ligar um bit em um número:
    //É bem simples, basta o número receber ele or 2 elevado ao bit que queremos setar
    int x, i;
    cin >> x >> i;
    x |= (1 << i);


    //Desligar o bit:
    // Primeiro garantimos que o bit está ligado usando o que fizemos na parte anterior,
    //depois o número recebe ele xor a potência de 2 do bit que queremos desligar.
    x |= (1 << i); //Primeiro eu ligo o bit, caso ele esteja desligado
    x ^= (1 << i); // Depois desligo o bit

    return 0;
}