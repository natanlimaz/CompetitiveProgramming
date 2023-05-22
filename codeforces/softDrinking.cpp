#include <bits/stdc++.h>

using namespace std;

int main() {

    string num;
    cin >> num;

    int totDigitos = 0;
    for(int  i = 0; i < num.size(); i++) {
        if(num[i] == '7' or num[i] == '4'){
            totDigitos++;
        }
    }

    if(totDigitos == 7 or totDigitos == 4) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    cout << endl;
}