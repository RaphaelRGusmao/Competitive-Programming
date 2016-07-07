// @author Raphael R. Gusmao
// ACM-ICPC Live Archive: 4853 - Emoogle Balance
// https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&page=show_problem&problem=2854
#include <stdio.h>

int main() {
    int caso = 0;
    int N = 0;
    scanf("%d", &N);
    
    while(N != 0){
        int balance = 0;
        
        for(int i=0; i<N; i++){
            int x = 0;
            scanf("%d", &x);
            
            if(x == 0){
                balance--;
            } else {
                balance++;
            }
        }
        
        caso++;
        printf("Case %d: %d\n", caso, balance);
        
        scanf("%d", &N);
    }
    
    return 0;
}