#include <bits/stdc++.h>

using namespace std;

char mapa[1005][1005];
vector<pair<int, int>> terraFirme;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    memset(mapa, '.', sizeof(mapa));

    int m, n;
    cin >> n >> m;

    // ler matriz e colocar no vetor terra firme, as posiçoes que contém o caractere de terra firme '#'
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mapa[i][j];
            if(mapa[i][j] == '#') {
                terraFirme.push_back(make_pair(i, j));
            }
        }
    }
    int costa = 0;
    // agora verificar se em cada ponto de terra firme, em algum lado dele tem água, se sim, ele é uma costa
    for(int i = (int) terraFirme.size() - 1; i >= 0; i--) {
        int iTerra = terraFirme[i].first;
        int jTerra = terraFirme[i].second;
        // se algum lado dele tiver agua, ele é uma costa
        if(mapa[iTerra+1][jTerra] == '.' or mapa[iTerra-1][jTerra] == '.' or mapa[iTerra][jTerra+1] == '.' or mapa[iTerra][jTerra-1] == '.') {
            costa++;
        }
    }

    cout << costa << endl;
    
}