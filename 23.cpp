#include <bits/stdc++.h>
 
using namespace std;
using namespace std :: chrono;
 
typedef long long ll;
typedef unsigned long long ull; 
 
#define sz(x) (int)(x).size()
#define minmin INT_MIN;
#define maxmax INT_MAX;
 
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define ins insert
#define emp emplace


void solve() {	
    int n; cin >> n;
    vector <ll> v(n + 1, 0);
    v[0] = 0;
    cin >> v[1];
    for(int i = 2; i < n; ++i){
        cin >> v[i];
        v[i] = v[i - 1] + v[i];
    }
    int cnt = 0;
}
int main() {
 
    /*auto start = high_resolution_clock::now();*/
 
    /*freopen("generation.in", "r", stdin);
    freopen("generation.out", "w", stdout);*/
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 	int t = 1; cin >> t;

    while(t--){
        solve();
    }
    /*auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << duration.count() << endl;*/
}
