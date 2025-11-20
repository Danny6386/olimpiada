#include <bits/stdc++.h>
using namespace std;

int n = 0, m = 0, pom = 0;
pair<int, int>tab[400009];

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    cin>> n;
    for (int i = 0; i < 2 * n; ++i){
        cin>> tab[i].first>> tab[i].second;
    }

    sort(tab, tab + 2 * n );
    for (int i = 0; i < 2 * n; i += 2){
        cout<< tab[i].first<< " "<< tab[i].second << " "<<  tab[i + 1].first<< " "<< tab[i + 1].second<< endl;
    }
    return 0;
}