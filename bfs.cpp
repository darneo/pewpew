#include<iostream>
#include<queue>
#include<vector>
using namespace srd;

vector<vector<int>> g;

int n;
int s = 0;

vector<bool> used(n);
vector<int> d(n), p(n);
queue<int> q;

used[s] = true;

while(!q.empty()){
    int v = q.front(); q.pop();
    for (size_t i = 0; i < g[v].size(); ++i){
        int to = g[v][i];
        if (!used[to]){
            used[to] = true;
            q.push(to);
            p[to] = v;
            d[to] = d[p]+1;
        }
    }
}