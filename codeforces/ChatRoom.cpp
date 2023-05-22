#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;

    queue<char> hello;
    
    for(int i = 0; i < (int) s.size(); i++) {
        hello.push(s[i]);
    }

    while(hello.front() != 'h' and hello.size() > 0) {
        hello.pop();
    }
    if(hello.size() > 0) {
        ans.push_back(hello.front());
        hello.pop();
    }

    while(hello.front() != 'e' and hello.size() > 0) {
        hello.pop();
    }
    if(hello.size() > 0 ) {
        ans.push_back(hello.front());
        hello.pop();
    }

    while(hello.front() != 'l' and hello.size() > 0) {
        hello.pop();
    }
    if(hello.size() > 0) {
        ans.push_back(hello.front());
        hello.pop();
    }

    while(hello.front() != 'l' and hello.size() > 0) {
        hello.pop();
    }
    if(hello.size() > 0) {
        ans.push_back(hello.front());
        hello.pop();
    }
    

    while(hello.front() != 'o' and hello.size() > 0) {
        hello.pop();
    }
    if(hello.size() > 0) {
        ans.push_back(hello.front());
        hello.pop();
    }
    
    if(ans == "hello") {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}