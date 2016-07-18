// @author Raphael R. Gusmao
// UVa Online Judge: 657 - The die is cast
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=598
#include <bits/stdc++.h>
using namespace std;

#define MAXN 55
int w, h, caso, qtd;
char tab[MAXN][MAXN];
vector<int> output;
int lin[4] = {1,  0, 0, -1};
int col[4] = {0, -1, 1,  0};

void dfs2(int x, int y){
    tab[x][y] = '*';
    
    for(int i=0; i<4; i++){
        int vizlin=x-lin[i], vizcol=y+col[i];
        if(1<=vizlin && vizlin<=h
        && 1<=vizcol && vizcol<=w
        && tab[vizlin][vizcol]=='X'){
            dfs2(vizlin, vizcol);
        }
    }
}

void dfs(int x, int y){
    if(tab[x][y]=='X'){
        qtd++;
        dfs2(x, y);
    }
    
    tab[x][y] = '.';
    
    for(int i=0; i<4; i++){
        int vizlin=x-lin[i], vizcol=y+col[i];
        if(1<=vizlin && vizlin<=h
        && 1<=vizcol && vizcol<=w
        && tab[vizlin][vizcol]!='.'){            
            dfs(vizlin, vizcol);
        }
    }
}

int main(){
    while(++caso){
        cin >> w >> h;
        if(!w|!h) break;
        
        output.clear();
        
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                cin >> tab[i][j];
            }
        }
        
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){                
                if(tab[i][j]!='.'){                    
                    qtd = 0;
                    dfs(i, j);
                    output.push_back(qtd);
                }
            }
        }
        sort(output.begin(), output.end());
        
        cout << "Throw " << caso << endl;
        cout << output[0];
        int len = output.size();
        for(int i=1; i<len; i++) cout << " " << output[i];
        cout << endl << endl;
    }
    
    return 0;
}