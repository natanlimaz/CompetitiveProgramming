#include <iostream>

using namespace std;

int main() {
    int mai = 0, min = 0;

    string s;
    cin >> s;

    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] >= 97 && s[i] <= 122) {
            min++;
        }

        if(s[i] >= 65 && s[i] <= 90) {
            mai++;
        }
    }

    if(mai > min) {
        for(int i = 0; i < (int) s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    else {
        for(int i = 0; i < (int) s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    
}