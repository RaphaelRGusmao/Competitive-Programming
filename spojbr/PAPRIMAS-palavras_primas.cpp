// @author Raphael R. Gusmao
// Spoj Brasil: PAPRIMAS - Palavras primas
// http://br.spoj.com/problems/PAPRIMAS/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char word[20] = "";
    
    while(scanf("%s", &word) != EOF) {
        int soma = 0;
        for(int i=0; i < strlen(word); i++) {
            if(word[i] >= 97 && word[i] <= 122){
                soma += (word[i]-96);
            } else if(word[i] >= 65 && word[i] <= 90) {
                soma += (word[i]-38);
            }
        }
        
        int N = soma;
        bool isPrimo = false;
        if (N == 1 || N == 2) {
            isPrimo = true;
        } else if ((N >= 2) && (N%2 != 0)) {
            for (int i = 3; i <= sqrt(N); i += 2) {
                if (N % i == 0) {
                    goto end;
                }
            }
            isPrimo = true;
        }
        end:;
        
        if(isPrimo){
            printf("It is a prime word.\n");
        } else {
            printf("It is not a prime word.\n");
        }
    }
    
    return 0;
}