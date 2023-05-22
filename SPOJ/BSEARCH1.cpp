#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> array, int ni) {
    int begin = 0;
    int end = array.size() - 1;
    while(begin <= end) {
        int mid = (begin + end) / 2;

        if(array[mid] == ni) {
            begin = mid;
        }
        if(array[mid] < ni) {
            begin = mid + 1;
        }
        else {
            end = mid - 1;
        }

        if(array[begin] != ni) {
            return -1;
        }
        else {
            return begin;
        }
    }
}

int main() {
    int n, q;

    cin >> n >> q;
    vector<int> array;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        array.push_back(x);
    }

    while(q--) {
        int ni;
        cin >> ni;
        int indice = binary_search(array, ni);
        cout << indice << endl;
    }
}