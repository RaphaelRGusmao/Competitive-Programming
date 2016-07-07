// @author Raphael R. Gusmao
// Timus Online Judge: 1197 - Lonesome Knight
// http://acm.timus.ru/problem.aspx?num=1197
#include <bits/stdc++.h>
using namespace std;

string pos;
int n, vizlin, vizcol, cont;
int lin[8] = { 2, 2,  1, 1, -1, -1, -2, -2};
int col[8] = {-1, 1, -2, 2, -2,  2, -1,  1};

int main(){
    ios::sync_with_stdio(false);
    
    cin >> n;
    while(n--){
        cin >> pos;
        cont = 0;        
        for(int i=0; i<8; i++){
            vizlin = pos[1]-'0' + lin[i];
            vizcol = pos[0]-'a'+1 + col[i];
            if((1<=vizlin && vizlin<=8) && (1<=vizcol && vizcol<=8)){
               cont++;
            }
        }
        cout << cont << endl;
    }
    
    return 0;
}