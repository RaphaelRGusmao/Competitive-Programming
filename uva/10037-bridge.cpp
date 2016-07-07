// @author Raphael R. Gusmao
// UVa Online Judge: 10037 - Bridge
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=978
#include <bits/stdc++.h>
using namespace std;

int casos, n;
int p[1010];
vector< pair<int,int> > pares;

int simula(){
    int a, b, c, d, s1, s2;
    int fim = n-1;
    int tempo = 0;
    while(fim>=0){
        if(fim >= 3){
            a = p[0];
            b = p[1];
            c = p[fim-1];
            d = p[fim];
            s1 = 2*b + a + d;
            s2 = 2*a + c + d;
            if(s1 < s2){
                tempo += s1;
                pares.push_back(make_pair(a,b));
                pares.push_back(make_pair(a,0));
                pares.push_back(make_pair(c,d));
                pares.push_back(make_pair(b,0));
            } else {
                tempo += s2;
                pares.push_back(make_pair(a,c));
                pares.push_back(make_pair(a,0));
                pares.push_back(make_pair(a,d));
                pares.push_back(make_pair(a,0));
            }
            fim -= 2;
        } else if(fim == 2){
            a = p[0];
            b = p[1];
            c = p[2];
            tempo += a + b + c;
            pares.push_back(make_pair(a,b));
            pares.push_back(make_pair(a,0));
            pares.push_back(make_pair(a,c));
            break;
        } else if(fim == 1){
            a = p[0];
            b = p[1];
            tempo += b;
            pares.push_back(make_pair(a,b));
            break;
        } else {
            a = p[0];
            tempo += a;
            pares.push_back(make_pair(a,0));
            break;
        }
    }
    return tempo;
}

int main(){
    cin >> casos;
    while(casos--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        sort(p, p+n);
        int tempo = simula();
        
        cout << tempo << endl;
        for(int i=0; i<pares.size(); i++){
            if(pares[i].second == 0){
                cout << pares[i].first << endl;
            } else {
                cout << pares[i].first << " " << pares[i].second << endl;
            }
        }
        if(casos != 0) cout << endl;
        
        pares.clear();
    }
    
    return 0;
}