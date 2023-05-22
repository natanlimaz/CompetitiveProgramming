#include <bits/stdc++.h>

using namespace std;

int main() {
    // Lista de arestas
    vector< pair<int, int> > arestas;

    arestas.push_back(make_pair(1, 2));
    arestas.push_back(make_pair(1, 3));
    arestas.push_back(make_pair(1, 6));
    arestas.push_back(make_pair(2, 3));
    arestas.push_back(make_pair(3, 4));

    // Matriz de adjacência
    int grafo[10][10]; // vamos supor que a matriz esteja zerada;
    grafo[1][2] = grafo[2][1] = 1;
    grafo[1][3] = grafo[3][1] = 1;
    grafo[1][6] = grafo[6][1] = 1;
    grafo[2][3] = grafo[3][2] = 1;
    grafo[3][4] = grafo[4][3] = 1;

    // Lista de adjacência
    vector<int> vizinhos[10];

    vizinhos[1].push_back(2);
    vizinhos[1].push_back(3);
    vizinhos[1].push_back(6);

    vizinhos[2].push_back(1);
    vizinhos[2].push_back(3);

    vizinhos[3].push_back(1);
    vizinhos[3].push_back(2);

    vizinhos[4].push_back(3);
}