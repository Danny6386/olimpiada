#include <bits/stdc++.h>
using namespace std;

string a, b;

int main(){
    cin>> a;

    for (int i = 1; i < size(a) + 1; ++i){
        b += a[-i];
    }

    cout<< b;

    return 0;
}