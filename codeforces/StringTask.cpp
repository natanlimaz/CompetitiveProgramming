#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    // convertendo tudo para minusculo
    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
    }

    string ans; // string q ira armazenar a minha resposta

    // percorro a string, se for consoante coloca um ponto e depois a letra na resposta
    // se for vogal, ignora a vogal
    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' and s[i] != 'y') {
            ans += '.';
            ans += s[i];
        }
    }

    cout << ans << endl;
}