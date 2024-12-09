#include <bits/stdc++.h>
 
using namespace std;
using namespace std :: chrono;

typedef long long ll; 

#define pb push_back;
 



void solve() {	    
    int n, k; cin >> n >> k;
    vector <int> v(101, 0);
    for(int i = 0; i <n; ++i){
        int num; cin >> num;
        v[num % k]++;
    }
    for(int i = 0; i < 101; ++i){
        if(v[i] & 1){
            cout << "YES" << endl;
            cout << i << endl;
        }
    }
    cout << "NO\n";
}
int main() {
    /*auto start = high_resolution_clock::now();*/
    
    /*freopen("generation.in", "r", stdin);
    freopen("generation.out", "w", stdout);*/

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 	int t = 1;  
 
    while(t--){
        solve();
    }
    /*auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << duration.count() << endl;*/
}