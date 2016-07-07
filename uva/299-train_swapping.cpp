// @author Raphael R. Gusmao
// UVa Online Judge: 299 - Train Swapping
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=235
#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    
    for(int k=0; k<N; k++){
        int cont = 0;
        int car[51];
        int L = 0;
        
        cin >> L;
        
        for(int i=0; i<51; i++){
            car[i] = 0;
        } 
        for(int i=0; i<L; i++){
            cin >> car[i];
        }
        
        for(int i=L-1; i>0; i--){
            for(int j=0; j<i; j++){
                if(car[j] > car[j+1]){
                    int aux = car[j];
                    car[j] = car[j+1];
                    car[j+1] = aux;
                    cont++;
                }
            }
        }
        
        cout << "Optimal train swapping takes " << cont << " swaps." << endl;
    }
    
    return 0;
}