// @author Raphael R. Gusmao
// Codeforces: 588A - Duff and Meat
// http://codeforces.com/contest/588/problem/A
#include <stdio.h>

int main(){
    int n = 0;
    int a = 0;
    int p = 0;
    int money = 0;
    int price = 101;

    scanf("%d", &n);

    for(int i=n; i>0; i--){
        scanf("%d %d", &a, &p);
        
        if(price > p){
            price = p;
        }
        
        money += price * a;
    }

    printf("%d\n", money);
    
    return 0;
}