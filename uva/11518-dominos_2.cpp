// @author Raphael R. Gusmao
// UVa Online Judge: 11518 - Dominos 2
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2513
#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010
int casos, n, m, l, x, y, z, qtd;
vector<int> adj[MAXN];
bool visitado[MAXN];

void dfs(int x){
    qtd++;
    visitado[x] = true;
    int len = adj[x].size();
    for(int i=0; i<len; i++){
        int viz = adj[x][i];
        if(!visitado[viz]) dfs(viz);
    }
}

int main(){
    cin >> casos;
    while(casos--){
        for(int i=1; i<n; i++) adj[i].clear();
        memset(visitado, false, sizeof(visitado));
        qtd = 0;
        
        cin >> n >> m >> l;
        for(int i=0; i<m; i++){
            cin >> x >> y;
            adj[x].push_back(y);
        }
        
        while(l--){
            cin >> z;
            if(!visitado[z]) dfs(z);
        }
        
        cout << qtd << endl;
    }    
    
    return 0;
}