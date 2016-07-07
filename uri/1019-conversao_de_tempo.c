// @author Raphael R. Gusmao
// URI Online Judge: 1019 - Conversao de Tempo
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1019
#include <stdio.h>

int main() {

    int time;
    scanf("%d", &time); 
    
    int h = time/3600;
    time -= h * 3600;
    
    int min = time/60;
    time -= min * 60;
    
    printf("%d:%d:%d\n", h, min, time);
    
    return 0;
}