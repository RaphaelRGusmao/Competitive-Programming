// @author Raphael R. Gusmao
// Spoj Brasil: PAR - Par ou impar
// http://br.spoj.com/problems/PAR/
#include <stdio.h>

int main() {
    int teste = 0;
    int N = 0;
    scanf("%d", &N);
    
    while(N != 0){
        teste++;
        printf("Teste %d\n", teste);
        
        char nome1[11];
        char nome2[11];
        scanf("%s %s", &nome1, &nome2);
        
        for(int i=0; i<N; i++){
            int A = 0;
            int B = 0;
            scanf("%d %d", &A, &B);
            
            if((A+B)%2 == 0){
               printf("%s\n\n", nome1); 
            } else {
               printf("%s\n\n", nome2);
            }
        }
        scanf("%d", &N);
    }
    
    return 0;
}