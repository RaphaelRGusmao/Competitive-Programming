// @author Raphael R. Gusmao
// Codeforces: 586A - Alena's Schedule
// http://codeforces.com/contest/586/problem/A
#include <stdio.h>

int main(){
    int n = 0;
    int lessons[101];
    int pairs = 0;
    scanf("%d", &n);

    for(int i=0; i<101; i++){
        lessons[i] = 0;
    }
    
    for(int i=1; i<n+1; i++){
        int a = -1;
        scanf("%d", &a);
        
        lessons[i] = a;        
    }
    
    for(int i=1; i<n+1; i++){
        if((lessons[i] == 1) || (lessons[i-1] == 1) && (lessons[i+1] == 1)){
            pairs++;
        }     
    }

    printf("%d\n", pairs);
    
    return 0;
}