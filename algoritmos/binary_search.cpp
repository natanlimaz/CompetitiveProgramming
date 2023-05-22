#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> vector, int item) {
    int begin = 0;
    int end = vector.size() - 1;
    while(begin <= end) {
        int i = (begin + end) / 2; // calcula o meio do subvetor


        if(vector[i] == item) { // se eu achei, retorno o indice dele(que eh o meio)
            return i;
        }

        if(vector[i] < item) {
            begin = i + 1;
        }
        else {
            end = i - 1;
        }
    }

    return -1; // se o elemento nao estiver no vetor eu retorno -1

}

int main() {
    vector<int> vetor = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};
    
    int indice = binary_search(vetor, 92);

    if(indice != -1) {
        cout << "O elemento esta no vetor - indice " << indice << endl;
    }
    else {
        cout << "O elemento NAO esta no vetor" << endl;
    }
}

