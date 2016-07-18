// @author Raphael R. Gusmao
// UVa Online Judge: 572 - Oil Deposits
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=513
#include <bits/stdc++.h>
using namespace std;

#define MAXN 110
int m, n, len, qtd;
bool tab[MAXN][MAXN];
bool visitado[MAXN][MAXN];
vector< pair<int, int> > pocket;
int lin[8] = {1,  1, 1,  0, 0, -1, -1, -1};
int col[8] = {-1, 0, 1, -1, 1, -1,  0,  1};

void dfs(int x, int y){
    visitado[x][y] = true;
    for(int i=0; i<8; i++){
        int vizlin=x-lin[i], vizcol=y+col[i];        
        if(0<=vizlin && vizlin<m
        && 0<=vizcol && vizcol<n
        && tab[vizlin][vizcol]
        && !visitado[vizlin][vizcol]){
            dfs(vizlin, vizcol);
        }
    }
}

int main(){
    while(true){
        cin >> m >> n;
        if(!m|!n) break;
        
        memset(tab, false, sizeof(tab));
        memset(visitado, false, sizeof(visitado));
        pocket.clear();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                char ch; cin >> ch;
                if(ch=='@'){
                    tab[i][j] = true;
                    pocket.push_back(make_pair(i, j));
                }
            }            
        }
        
        qtd = 0;
        len = pocket.size();
        for(int i=0; i<len; i++){
            int x=pocket[i].first, y=pocket[i].second;
            if(!visitado[x][y]){
                qtd++;
                dfs(x, y);
            }
        }
        
        cout << qtd << endl;
    }
    
    return 0;
}