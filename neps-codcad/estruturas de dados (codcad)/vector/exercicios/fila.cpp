#include <bits/stdc++.h>

#define PB push_back
using namespace std;

vector<int> fila;

void removeElemento(int x) {
   for(int i = 0; i < fila.size(); i++) {
      if(fila[i] == x){
         fila.erase(fila.begin() + i);
         break;
      }
   }
}

int main() {
   int n;
   cin >> n;

   for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      fila.PB(x);
   }

   int m;
   cin >> m;

   for(int i = 0; i < m; i++){
      int x;
      cin >> x;
      removeElemento(x);
   }

   for(int i = 0; i < fila.size()-1; i++) {
      cout << fila[i] << " ";
   }

   cout << fila[fila.size() - 1] << endl;
}