// @author Raphael R. Gusmao
// URI Online Judge: 1036 - Formula de Bhaskara
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1036
#include <stdio.h>
#include <math.h>

int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    double R1 = 0;
    double R2 = 0;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double delta = B*B - 4*A*C;
    
    if((delta >= 0) && (A > 0)) {
        R1 = (-B + sqrt(delta)) / (2*A);
        R2 = (-B - sqrt(delta)) / (2*A);
        
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    } else {
        printf("Impossivel calcular\n");
    }
    
    return 0;
}