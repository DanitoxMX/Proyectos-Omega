/*#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string cadena;
    char c;
    int n, i, t;

    getline(cin, cadena);
    printf("%c", cadena);
    scanf("%d", n);
    for(int j = 0; j < n; j++){
        scanf("%c, %d, %d", &c, &i, &t);
        printf("%c, %d, %d", &c, &i, &t);
    }

    return 0;
}
*/

#include"bits/stdc++.h"
using namespace std;
int main(){
   string cadena;
   int n,longitud,posicion,longitud_sub,posicion_car;
   char letra;
   getline(cin,cadena);
   longitud=cadena.length();
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>letra>>posicion>>longitud_sub;
      if(cadena[posicion]==letra||posicion_car==longitud-posicion){
        cout<<"1";
      }
      else{
        cout<<"0";
      }
   }
}
