// @author Raphael R. Gusmao
// URI Online Judge: 1018 - Cedulas
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1018
#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    printf("%d\n", num);
    
    int aux = num/100;
    if(aux > 0){
       printf("%d nota(s) de R$ 100,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 100,00\n"); 
    }
    num -= aux * 100;
    
    aux = num/50;
    if(aux > 0){
       printf("%d nota(s) de R$ 50,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 50,00\n"); 
    }
    num -= aux * 50;
    
    aux = num/20;
    if(aux > 0){
       printf("%d nota(s) de R$ 20,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 20,00\n"); 
    }
    num -= aux * 20;
    
    aux = num/10;
    if(aux > 0){
       printf("%d nota(s) de R$ 10,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 10,00\n"); 
    }
    num -= aux * 10;
    
    aux = num/5;
    if(aux > 0){
       printf("%d nota(s) de R$ 5,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 5,00\n"); 
    }
    num -= aux * 5;
    
    aux = num/2;
    if(aux > 0){
       printf("%d nota(s) de R$ 2,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 2,00\n"); 
    }
    num -= aux * 2;
    
    aux = num/1;
    if(aux > 0){
       printf("%d nota(s) de R$ 1,00\n", aux); 
    } else {
        printf("0 nota(s) de R$ 1,00\n"); 
    }
    
    return 0;
}