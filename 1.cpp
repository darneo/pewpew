#include <bits/stdc++.h>
 
using namespace std;
using namespace std :: chrono;

typedef long long ll; 


 
vector <int> v(1e5 + 1, 0);

void solve() {	    
    int n; cin >> n;
    cout << v[n] << endl;
}
int main() {
    /*auto start = high_resolution_clock::now();*/
    
    /*freopen("generation.in", "r", stdin);
    freopen("generation.out", "w", stdout);*/
    int cnt = 2, l = 1, m = 1;
    for(int i = 1; i < 1e5 + 1; ++i){
        v[i] = m;
        if(l == i){
            l = (l + 1) * 2;
            m += 1;
        }
    }

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 	int t = 1;   cin >> t;
 
    while(t--){
        solve();
    }
    /*auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << duration.count() << endl;*/
}