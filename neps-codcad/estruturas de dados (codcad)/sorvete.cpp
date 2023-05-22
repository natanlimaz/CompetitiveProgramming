#include <bits/stdc++.h>

#define ll long long

#define pb push_back

#define mk make_pair
#define ff first
#define ss second

#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

using namespace std;

vector< pair<int, int> > sorveteiro;
vector< pair<int, int> > intervalos;

unsigned int p, s;

void solve() {
  	cin >> p >> s;

	for(int i = 0; i < s; i++) {
		int u, v;
		cin >> u >> v;
		sorveteiro.pb(mk(u, v));
	}

	for(int i = 0; i < sz(sorveteiro); i++) {
		if(sorveteiro[i].ff >= 0 and sorveteiro[i].ff <= p) {
			if(sorveteiro[i].ss >= 0 and sorveteiro[i].ss <= p) {
				intervalos.pb(mk(sorveteiro[i].ff, sorveteiro[i].ss));
			}
		}
	}

	for(auto i : intervalos) {
		cout << i.ff << " " << i.ss << endl;
	}


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	solve();

}
