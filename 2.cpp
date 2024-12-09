#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int a;cin >> a; 
    while (a--) { 
        int count = 0; 
        int b, c;cin >> b >> c; 
 
        for (int i = 1; i <= c; i++) { 
            int result = b ^ i; 
            if (b % result == 0 || i % result == 0) { 
                count++; 
            } 
        } 
        cout << count << endl; 
    } 
    return 0; 
}