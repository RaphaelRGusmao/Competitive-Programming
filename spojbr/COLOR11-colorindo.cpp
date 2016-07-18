// @author Raphael R. Gusmao
// Spoj Brasil: COLOR11 - Colorindo
// http://br.spoj.com/problems/COLOR11/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 210
int n, m, x, y, k, a, b, qtd;
bool grade[MAXN][MAXN];
bool visitado[MAXN][MAXN];
int lin[8] = {1,  1, 1,  0, 0, -1, -1, -1};
int col[8] = {-1, 0, 1, -1, 1, -1,  0,  1};

void dfs(int x, int y){
    for(int i=0; i<8; i++){
        int vizlin = x+lin[i];
        int vizcol = y+col[i];
        
        if(1<=vizlin && vizlin<=n
        && 1<=vizcol && vizcol<=m
        && !grade[vizlin][vizcol]
        && !visitado[vizlin][vizcol]){
            qtd++;
            visitado[vizlin][vizcol] = true;
            dfs(vizlin, vizcol);
        }
    }
}

int main(){
    cin >> n >> m >> x >> y >> k;
    
    while(k--){
        cin >> a >> b;
        grade[a][b] = true;
    }
    
    qtd = 1;
    visitado[x][y] = true;
    dfs(x, y);
    
    cout << qtd << endl;
    
    return 0;
}