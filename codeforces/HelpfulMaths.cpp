#include <bits/stdc++.h>

using namespace std;

int cmp(int a, int b) {
    return a > b;
}

int main() {
    vector<char> operations;
    vector<char> numbers;

    string s, ans;
    cin >> s;

    for(int i = 0; i < (int) s.size(); i++) {
        if(s[i] == '+') {
            operations.push_back(s[i]);
        }
        else {
            numbers.push_back(s[i]);
        }
    }

    sort(numbers.begin(), numbers.end(), cmp); // ordeno do maior para o menor, pois o pop back tira o ultimo elemento
    while(!numbers.empty()) {
        ans += numbers.back();
        numbers.pop_back();

        if(!operations.empty()) {
            ans += operations.back();
            operations.pop_back();
        }
    }
    
    cout << ans << endl;
}