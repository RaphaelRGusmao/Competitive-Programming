// @author Raphael R. Gusmao
// Codeforces: 580A - Kefa and First Steps
// http://codeforces.com/contest/580/problem/A
#include <iostream>
using namespace std;

int main() {
    unsigned long long cont = 0;
    unsigned long long max = 0;
    unsigned long long last = 0;
    unsigned long long n = 0;
    cin >> n;
    
    for(unsigned long long i=0; i<n; i++){
        unsigned long long a = 0;
        cin >> a;
            
        if(a >= last){
            cont++;
            if(cont > max){
                max = cont;
            }
        } else {
            cont = 1;
        }
        
        last = a;
    }
    
    cout << max << endl;
    
    return 0;
}