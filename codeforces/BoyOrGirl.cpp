#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> characters;

    string s;
    cin >> s;
    
    for(int i = 0; (int) i < s.size(); i++) {
        characters.insert(s[i]);
    }


    if(characters.size() % 2 == 1) { // caso o numero de caracteres distintos seja par
        cout << "IGNORE HIM!" << endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
}