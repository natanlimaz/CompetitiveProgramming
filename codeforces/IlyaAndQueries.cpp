#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s ;
    int prefix_count[100005];
    memset(prefix_count, 0, s.size());

    cin >> s;
    // pre computo antes o total de vezes que elementos iguais aparecem
    for(int i = 0; i < (int) s.size() - 1; i++) {
        int igual = s[i] == s[i + 1];
        prefix_count[i] = igual;
        if(i > 0) {
            prefix_count[i] += prefix_count[i-1];
        }
    }
    
    int m;
    cin >> m;
    while(m--) {
        int li, ri;

        cin >> li >> ri;
        li--;
        ri--;
        
        int count = prefix_count[ri-1];
        if(li > 0)
            count -= prefix_count[li-1];

        printf("%d\n", count);
    }
}