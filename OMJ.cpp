
#include <bits/stdc++.h>
using namespace std;

int n, m, q, r, tab[1000009];

int main(){
    cin>> n>> m;
    for(int i = 1; i < n + 1; ++i){
        cin>> tab[i];
    }
    for (int i = 1; i < n + 1; ++i) {
        tab[i + 1] =  tab[i + 1] + tab[i];
    }

    for (int i = 1; i < m + 1; i++){
        cin>> q>> r;
        cout<< tab[r] - tab[q-1]<< endl;
    }

    return 0;
    
}
