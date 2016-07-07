// @author Raphael R. Gusmao
// Spoj Brasil: JTACOGRA - Tacografo
// http://br.spoj.com/problems/JTACOGRA/
#include <stdio.h>

int main() {
    unsigned long long D = 0;
    int N = 0;
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        int T = 0;
        int V = 0;
        scanf("%d %d", &T, &V);
        
        D = D + T*V;
    }
    
    printf("%llu\n", D);
    
    return 0;
}