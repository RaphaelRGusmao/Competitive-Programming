// @author Raphael R. Gusmao
// Spoj Brasil: TARZAN12 - Tarzan
// http://br.spoj.com/problems/TARZAN12/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010
int n, d, x, y, qtd;
pair<int, int> ponto[MAXN];
vector<int> adj[MAXN];
bool visitado[MAXN], can;

int dist(int i, int j){
    int xi=ponto[i].first, yi=ponto[i].second;
    int xj=ponto[j].first, yj=ponto[j].second;
    return ((xi-xj)*(xi-xj) + (yi-yj)*(yi-yj));
}

void dfs(int x){
    visitado[x] = true;
    int len = adj[x].size();
    for(int i=0; i<len; i++){
        int viz = adj[x][i];
        if(!visitado[viz]){
            dfs(viz);
        }
    }
}

int main(){
    cin >> n >> d;
    d *= d;
    
    for(int i=0; i<n; i++){
        cin >> x >> y;
        ponto[i] = make_pair(x, y);
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(dist(i, j)<=d){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    
    can = true;
    for(int i=0; i<n; i++){
        if(!visitado[i]){
            if(qtd++){
                can = false;
                break;
            }
            dfs(i);
        }
    }
    
    cout << (can?"S":"N") << endl;
    
    return 0;
}