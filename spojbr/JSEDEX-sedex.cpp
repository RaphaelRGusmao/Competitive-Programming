// @author Raphael R. Gusmao
// Spoj Brasil: JSEDEX - Sedex
// http://br.spoj.com/problems/JSEDEX/
#include <stdio.h>

int main() {
    long long N = 0;
    long long A = 0;
    long long L = 0;
    long long P = 0;
    
    scanf("%d", &N);
    scanf("%d %d %d", &A, &L, &P);
    
    if(N<=A && N<=L && N<=P){
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}