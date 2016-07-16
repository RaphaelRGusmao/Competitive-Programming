// @author Raphael R. Gusmao
// Spoj Brasil: TROIA13 - Familias de Troia
// http://br.spoj.com/problems/TROIA13/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 50010

int n, m, a, b, qtd;
bool visitado[MAXN];
vector<int> adj[MAXN];

void dfs(int x){
    int len = adj[x].size();
    for(int i=0; i<len; i++){
        int viz = adj[x][i];
        if(!visitado[viz]){
            visitado[viz] = true;
            dfs(viz);
        }
    }
}

int main(){
    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        cin >> a >> b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i=1; i<=n; i++){
        if(!visitado[i]){
            qtd++;
            visitado[i] = true;
            dfs(i);
        }
    }
    
    cout << qtd << endl;
    
    return 0;
}