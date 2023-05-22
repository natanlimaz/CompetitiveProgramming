#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, v;
    vector<int> ans;
    int testCase = 1;
    while(true) {
        cin >> a >> v;
        if(a == 0 && v == 0) break;

        int aeroporto[101];
        memset(aeroporto, 0, sizeof(aeroporto));

        for(int i = 0; i < v; i++) {
            int x, y;
            cin >> x >> y;
            aeroporto[x]++;
            aeroporto[y]++;   
        }

        int maior = aeroporto[1];
        for(int i = 2; i <= a; i++) {
            if(aeroporto[i] > maior) {
                maior = aeroporto[i];
            }
        }

        for(int i = 1; i <= a; i++) {
            if(aeroporto[i] == maior) {
                ans.push_back(i);
            }
        }

        sort(ans.begin(), ans.end());
    
        cout << "Teste " << testCase << endl;
        for(int i = 0; i < (int) ans.size(); i++) {
            if(i < 1) {
                cout << ans[i];
            }
            else {
                cout << " " << ans[i];
            }
        }
        cout << endl << endl;

        ans.clear();
        testCase++;
    }
}