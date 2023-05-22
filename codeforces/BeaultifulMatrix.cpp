#include <bits/stdc++.h>

using namespace std;

int main() {
    int matrix[6][6];
    memset(matrix, 0, sizeof(matrix));

    int x, y; // aqui eu vou amazenar a posicao do 1(linha e coluna)

    for(int i = 1; i < 6; i++) {
        for(int j = 1; j < 6; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    int tot = 0;
    while(matrix[3][3] != 1) {
        if(x > 3) {
            swap(matrix[x-1][y], matrix[x][y]);
            x--;
            tot++;
        }
        else if(x < 3) {
            swap(matrix[x+1][y], matrix[x][y]);
            x++;
            tot++;
        }
        else if(y > 3) {
            swap(matrix[x][y-1], matrix[x][y]);
            y--;
            tot++;
        }
        else if(y < 3) {
            swap(matrix[x][y+1], matrix[x][y]);
            y++;
            tot++;
        }
    }

    cout << tot << endl;
}