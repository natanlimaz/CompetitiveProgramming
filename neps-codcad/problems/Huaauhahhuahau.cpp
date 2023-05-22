#include <bits/stdc++.h>

#define PB push_back

using namespace std;

int main() {
    string s;
    string esq_dir;
    string dir_esq;

    cin >> s;
    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
            esq_dir.PB(s[i]);
        }
    }
    for(int i = (int) s.size() - 1; i >= 0; i--) {
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
            dir_esq.PB(s[i]);
        }
    }

    if(esq_dir == dir_esq) {
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }
}