// @author Raphael R. Gusmao
// Codeforces: 651B - Beautiful Paintings
// http://codeforces.com/contest/651/problem/B
#include <iostream>
using namespace std;

int main() {
    int a[1001];
    int num[1001];
    int cont = 0;
    int n = 0;
    cin >> n;
    
    for(int i=0; i<1001; i++){
        a[i] = 0;
        num[i] = 0;
    }
    
    for(int i=0; i<n; i++){
        int temp = 0;
        cin >> temp;
        num[temp]++;
    }
    
    int k = 0;
    while(k!= n){
        for(int j=0; j<1001; j++){
            if(num[j] != 0){
                a[k] = j;
                num[j]--;
                k++;
            }
        }
    }
    
    for(int i=1; i<n; i++){
        if(a[i] > a[i-1]){
            cont++;
        }
    }
    
    cout << cont << endl;
    
    return 0;
}