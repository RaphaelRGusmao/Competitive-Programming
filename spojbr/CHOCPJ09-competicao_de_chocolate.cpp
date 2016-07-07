// @author Raphael R. Gusmao
// Spoj Brasil: CHOCPJ09 - Competicao de chocolate
// http://br.spoj.com/problems/CHOCPJ09/
#include <stdio.h>
 
int main(){
    
    unsigned int N = 0;
    unsigned int M = 0;
    
    scanf("%d %d", &N, &M);
    
    if(N%(M+1) == 0){
        printf("Carlos\n");
    } else {
        printf("Paula\n");
    }
 
    return 0;
}