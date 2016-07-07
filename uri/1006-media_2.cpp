// @author Raphael R. Gusmao
// URI Online Judge: 1006 - Media 2
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
#include <stdio.h>

int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double MEDIA = (A*2 + B*3 + C*5) / 10;
    
    printf("MEDIA = %.1f\n", MEDIA);
    
    return 0;
}