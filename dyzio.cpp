#include <bits/stdc++.h>
using namespace std;

int tab[1000009];

int n, a, b;

int main(){
    for(int i=0; i<1000009; i++){
        tab[i] = 1;
    }

    tab[1] = 0;

    for(int i=2; i<1000009; i++){
        if(tab[i] == 1){

            for(int j = i + i; j<1000009; j+=i){
                tab[j] = 0;
            }
        }
    }

    for (int i = 1; i < 1000009; ++i){
        tab[i + 1] = tab[i + 1] + tab[i];
    }

    cin>> n;

    for (int i = 0; i < n; ++i){
        cin>> a>> b;
        cout<< tab[b] - tab[a-1]<< endl;
    }

    return 0;

}