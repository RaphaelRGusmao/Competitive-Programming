// @author Raphael R. Gusmao
// Codeforces: 630C - Lucky Numbers
// http://codeforces.com/contest/630/problem/C
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    int n = 0;
    
    while(scanf("%d", &n) != EOF){
        unsigned long long result = pow(2, n+1)-2;
       	cout << result << endl;
    }
    
    return 0;
}