// @author Raphael R. Gusmao
// Codeforces: 618A - Slime Combining
// http://codeforces.com/contest/618/problem/A
#include <bits/stdc++.h>
using namespace std;

struct fila {
    int v[100010], ini=0, fim=-1;
    void push(int x){ v[++fim] = x; }
    void pop(){ if(!empty()) ini++; }
    int front(){ return v[ini]; }
    int back(){ return v[fim]; }
    bool empty(){ return ini>fim; }
    int size(){ return fim-ini+1; }
    void clear(){ ini=0; fim=-1; }
};
fila f;
int n;

int main(){
    cin >> n;
    
    for(int i=0; i<n; i++){
        f.push(1);
        while(f.size()>1){
            if(f.v[f.fim]==f.v[f.fim-1]){
                f.fim--;
                f.v[f.fim] = f.v[f.fim+1]+1;
            } else {
                break;
            }
        }
    }
    
    while(f.size()>0){
        cout << f.front();
        f.pop();
        if(!f.empty()) cout << " ";
    }
    
    return 0;
}