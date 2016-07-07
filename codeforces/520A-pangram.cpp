// @author Raphael R. Gusmao
// Codeforces: 520A - Pangram
// http://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>
using namespace std;

int n;
string str;
set<int> alph;

int main(){
    ios::sync_with_stdio(false);
    
    cin >> n >> str;
    
    for(int i=65; i<91; i++) alph.insert(i);
    
    for(int i=0; i<n; i++){
        int c = (int)str[i];
        if(c<=90) {
            alph.erase(c);
        } else {
            alph.erase(c-32);
        }
    }
    
    cout << (alph.empty()?"YES":"NO") << endl;
    
    return 0;
}