// @author Raphael R. Gusmao
// UVa Online Judge: 10946 - You want what filled?
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1887
#include <bits/stdc++.h>
using namespace std;

#define MAXN 55
int m, n, caso, qtd;
char tab[MAXN][MAXN];
bool visitado[MAXN][MAXN];
vector< pair<int,char> > holes;
int lin[4] = {1,  0, 0, -1};
int col[4] = {0, -1, 1,  0};

void dfs(int x, int y){
    visitado[x][y] = true;
    for(int i=0; i<4; i++){
        int vizlin=x-lin[i], vizcol=y+col[i];
        if(1<=vizlin && vizlin<=m
        && 1<=vizcol && vizcol<=n
        && tab[vizlin][vizcol] == tab[x][y]
        && !visitado[vizlin][vizcol]){
            qtd++;
            dfs(vizlin, vizcol);
        }
    }
}

int main(){
    while(++caso){
        cin >> m >> n;
        if(!m|!n) break;
        
        memset(visitado, false, sizeof(visitado));
        holes.clear();
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                cin >> tab[i][j];
            }
        }
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(!visitado[i][j] && tab[i][j]!='.'){
                    qtd = 1;
                    dfs(i, j);
                    holes.push_back(make_pair(-qtd, tab[i][j]));
                }
            }
        }
        sort(holes.begin(), holes.end());
        
        cout << "Problem " << caso << ":" << endl;
        int len = holes.size();
        for(int i=0; i<len; i++){
            cout << holes[i].second << " " << -holes[i].first << endl;
        }
    }
    
    return 0;
}