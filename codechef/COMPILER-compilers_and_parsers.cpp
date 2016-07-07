// @author Raphael R. Gusmao
// Codechef: COMPILER - Compilers and parsers
// https://www.codechef.com/problems/COMPILER
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int result = 0;
        int cont = 0;
        char exp[1000001];
        cin >> exp;
        
        for(int j=0; exp[j]!='\0'; j++){
            if(exp[j]=='<'){
                cont++;
            } else {
                cont--;
                if(cont==0){
                    result = j+1;
                } else if(cont<0){
                    break;
                }
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}