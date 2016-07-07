// @author Raphael R. Gusmao
// URI Online Judge: 1176 - Fibonacci em Vetor
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1176
#include <stdio.h>

int main() {
    int T = 0;
    unsigned long long int fib[61];
    
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<61; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }

    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        int N = 0;
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }
    
    return 0;
}