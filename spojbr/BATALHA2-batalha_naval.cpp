// @author Raphael R. Gusmao
// Spoj Brasil: BATALHA2 - Batalha naval
// http://br.spoj.com/problems/BATALHA2/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 110
int n, m, k, l, c, len, qtd;
char ch;
int tab[MAXN][MAXN];
bool visitado[MAXN][MAXN];
vector< pair<int, int> > tiro;
int lin[4] = {1,  0, 0, -1};
int col[4] = {0, -1, 1,  0};

bool dfs(int x, int y){
    if(tab[x][y] == 1){
        return false;
    }
    
    if(tab[x][y] == -1){
        bool ok = true;
        visitado[x][y] = true;
        
        for(int i=0; i<4; i++){
            int vizlin=x-lin[i], vizcol=y+col[i];
            
            if(1<=vizlin && vizlin<=n
            && 1<=vizcol && vizcol<=m
            && tab[vizlin][vizcol] != 0
            && !visitado[vizlin][vizcol]){
                ok = dfs(vizlin, vizcol) && ok;
            }
        }
        return ok;
    }
}

int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ch;
            if(ch=='#') tab[i][j] = 1;
        }
    }
    
    cin >> k;
    while(k--){
        cin >> l >> c;
        if(tab[l][c]){
            tab[l][c] = -1;
            tiro.push_back(make_pair(l, c));
        }
    }
    
    len = tiro.size();
    for(int i=0; i<len; i++){
        int x=tiro[i].first, y=tiro[i].second;
        if(!visitado[x][y]){
            if(dfs(x, y)){
                qtd++;
            }
        }
    }
    
    cout << qtd << endl;
    
    return 0;
}