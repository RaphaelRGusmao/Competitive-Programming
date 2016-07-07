// @author Raphael R. Gusmao
// Codeforces: 489C - Given Length and Sum of Digits...
// http://codeforces.com/problemset/problem/489/C
#include <stdio.h>

int main() {
    unsigned long long x = 0;
    unsigned long long y = 0;
    int n = 0;
    int b = 0;
    
    scanf("%d %d", &n, &b);
    for(int i=0; i<n; i++){
        int temp = 0;
        scanf("%d", &temp);
        x = x*b + temp;
    }
    
    scanf("%d %d", &n, &b);
    for(int i=0; i<n; i++){
        int temp = 0;
        scanf("%d", &temp);
        y = y*b + temp;
    }
    
    if(x>y){
        printf(">\n");
    } else if(x<y){
        printf("<\n");
    } else {
        printf("=\n");
    }

}