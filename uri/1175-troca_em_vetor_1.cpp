// @author Raphael R. Gusmao
// URI Online Judge: 1175 - Troca em Vetor I
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1175
#include <stdio.h>

int main() {
    long N[20];
    
    for(int i=0; i<20; i++){
        int x = 0;
        scanf("%d", &x);
        N[i] = x;
    }
    
    for(int i=0; i<10; i++){
        int aux = N[i];
        N[i] = N[19-i];
        N[19-i] = aux;
    }
    
    for(int i=0; i<20; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}