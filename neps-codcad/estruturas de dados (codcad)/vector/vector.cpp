#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    cout << "Tamanho do vetor: " << v.size() << endl;

    v.push_back(10);
    v.push_back(7);
    v.push_back(21);

    cout << "Tamanho do vetor: " << v.size() << endl;

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //v.resize(10);
    
    v.pop_back();
    v.clear();
    cout << "Tamanho do vetor apos clear: " << v.size() << endl;
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> sortt = {5, 10, 2, 4};
    sort(sortt.begin(), sortt.end());
    for(auto i : sortt) {
        cout << i << " ";
    }



}