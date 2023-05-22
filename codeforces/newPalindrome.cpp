#include <bits/stdc++.h>

using namespace std;

string reverse_s(string s) {
    string reverse;
    for(int i = (int) s.size() - 1; i >= 0; i--) {
        reverse.push_back(s[i]);
    }

    return reverse;
}

bool is_palindrome(string s, string reverse) {
    if(s == reverse) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;

    bool isPalindrome = false;

    queue<string> palindrome;

    while(t--) {
        string s;
        string s_cpy;
        cin >> s;

        s_cpy = s;

        for(int i = 0; i < (int) s.size(); i++) {
            for(int j = 0; j < (int) s.size(); j++) {
                swap(s[i], s[j]);
                palindrome.push(s);
            }
        }

        palindrome.pop(); // retiro o primeiro pois ele sera igual a palavra


        
        while(!palindrome.empty()) {

            string reverse = reverse_s(palindrome.front()); // inverto a string atual

            if(is_palindrome(palindrome.front(), reverse)) { // vejo se ela é palindromo
                if(palindrome.front() != s_cpy) { // se for, vejo se ela eh diferente da entrada s
                    isPalindrome = true;
                }
            }
            palindrome.pop();
        }

        if(isPalindrome) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        isPalindrome = false;
    }
}