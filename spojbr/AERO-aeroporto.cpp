// @author Raphael R. Gusmao
// Spoj Brasil: AERO - Aeroporto
// http://br.spoj.com/problems/AERO/
#include <stdio.h>

int main(){
    int A = -1;
    int V = -1;
    int X = 0;
    int Y = 0;
    int trafego[101];
    int teste = 0;
    
    scanf("%d %d", &A, &V);
    while((A != 0) || (V != 0)){
        
        for(int i=1; i<=A; i++){
            trafego[i] = 0;
        }
        
        for(int i=0; i<V; i++){
            scanf("%d %d", &X, &Y);
            trafego[X]++;
            trafego[Y]++;
        }
        
        int max = 0;
        for(int i = 1; i <= A; i++){
            if(max < trafego[i]) {
                max = trafego[i];
            }
        }

        teste++;
        printf("Teste %d\n", teste);
        
        bool primeiro = true;
        for(int i = 1; i <= A; i++){
            if(max == trafego[i]){
                if(primeiro){
                    printf("%d", i);
                } else {
                    printf(" %d", i);
                }
                primeiro = false;
            }
        }
        
        printf("\n\n");
        scanf("%d %d", &A, &V);
    }

    return 0;
}