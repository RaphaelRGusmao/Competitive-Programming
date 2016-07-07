// @author Raphael R. Gusmao
// URI Online Judge: 1072 - Intervalo 2
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1072
#include <stdio.h>

int main() {
    int N = 0;
    int in = 0;
    int out = 0;
    
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        long X = 0;
        scanf("%d", &X);
        
        if((X >= 10) && (X <= 20)) {
            in++;
        } else {
            out++;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}