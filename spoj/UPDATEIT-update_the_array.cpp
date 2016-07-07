// @author Raphael R. Gusmao
// Spoj: UPDATEIT - Update the array !
// http://www.spoj.com/problems/UPDATEIT/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010
int t, n, u, l, r, val, q, ind;
long long v[MAXN];

int main(){
    ios::sync_with_stdio(false);
    
    cin >> t;
    while(t--){
        memset(v, 0, sizeof(v));
        
        cin >> n >> u;
        while(u--){
            cin >> l >> r >> val;
            v[l] += val;
            v[r+1] -= val;
        }
        for(int i=1; i<n; i++){
            v[i] += v[i-1];
        }
        
        cin >> q;
        while(q--){
            cin >> ind;
            cout << v[ind] << endl;
        }
    }
    
    return 0;
}