// @author Raphael R. Gusmao
// Spoj Brasil: FECHAD14 - Fechadura
// http://br.spoj.com/problems/FECHAD14/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N = 0;
    int M = 0;
    int alturas[1000];
    int qtdMov = 0;
    int acum = 0;
    
    scanf("%d %d", &N, &M);
 
    for (int i = 0; i < N; i++) {
        scanf("%d", &alturas[i]);
        
        int diferenca = M - (alturas[i] + acum);
        qtdMov += abs(diferenca);
        acum = diferenca;
    }
    
    printf("%d\n", qtdMov);
    
    return 0;
}