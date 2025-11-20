
#include <bits/stdc++.h>
using namespace std;

bool tab[1300009];
int n;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    
    cin>> n;
    for(int i=0; i<1300009; i++){
        tab[i] = true;
    }

    tab[1] = false;

    for(int i=2; i<1300009; i++){
        if(tab[i] == true){

            for(int j = i + i; j<1300009; j+=i){
                tab[j] = false;
            }
        }
    }
    
    int pom = 0, i = 2;

    while ( pom != n){
        if (tab[i] == true){
            cout<< i<< " ";
            pom++;
        }
        ++i;
    }
    
    return 0;
    
}
