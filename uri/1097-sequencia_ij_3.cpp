// @author Raphael R. Gusmao
// URI Online Judge: 1097 - Sequencia IJ 3
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1097
#include <stdio.h>

int main() {
    for(int i=1; i<10; i+=2){
        for(int j=0; j<3; j++){
            printf("I=%d J=%d\n", i, i-j+6);
        }
    }
    
    return 0;
}