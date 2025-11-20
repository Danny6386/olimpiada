#include <bits/stdc++.h>
using namespace std;

int n, m[10000];

int main(){
    cin>> n;

    for (int i  = 0; i < n; ++i){
        cin>> m[i];
    }

    sort(m, m + n);
    cout<< m[n-1]<< endl << m[n-2] << endl << m[n-3];
    return 0;
}