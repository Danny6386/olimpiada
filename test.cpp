/*
--------------------------------------- 04.10.2025 ---------------------------------

n - lioczba wierszy  m - liczba kolumn
n m         
4 5
3 5 7 1 5 -> 16
2 4 2 6 1 -> 15
4 2 1 1 1 -> 9
5 3 2 1 6 -> 17


znajdz wiersz i kolumne o najwiekszej sumie
*/
#include <iostream>
using namespace std;

int tab[1000009][1000009], n, m, wynik = 0, wiersz = 0, wynik2 = 0, kolumna = 0;

int main(){
    cin>> n>> m;
    
    for (int i = 0; i < n; ++i){
        int suma = 0;
        for (int j = 0; j < m; ++j){
            cin>> tab[i][j];
            suma += tab[i][j];
        }

        if (suma > wynik){
            wynik = suma;
            wiersz = i;
        }
    }
    //i - numer wiersza
    //j - numer kolumny
    
    for (int j = 0; j < m; j++){
        int suma2 = 0;
        for (int i = 0; i < n; ++i){
            suma2 = tab[i][j];
        }
        
        if (suma2 > wynik){
            wynik = suma2;
            kolumna = j;
        }

    }


    cout<< wiersz<< kolumna;

    return 0;
}
/*

             **
 1 3 2 5 6 2 1*
 1 5 3 1 6 3 1
 3 4 4 2 5 1 4
*0 5 3 1 0 2 3
**


 9 9 9 0
 1 1 1 1
 1 1 1 1
 0 6 6 6 

 wejscie:
n,m - liczba wierszy i kolumn


wejscie:
4 4
2 0 1 0 
0 3 1 5
2 0 1 2
0 1 1 3

 praca domowa:

startujemy w lewym dolnym rogu, musimy dostać się do prawego górnego rogu.
jedyne możliwe ruchy to w prawo i do góry.
znajdz największą sumę liczb które możemy zebrać chodząc w taki sposób

*/
















