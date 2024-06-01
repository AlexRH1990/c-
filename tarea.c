#include<iostream>
#include<stdlib.h>
#include<sstream>
#include<string>
#include<ctime>
#include<iomanip>
#include<cstdlib>


using namespace std;


    bool prueba(int a[3][3], int i, int j, int numAleatorio ){
     for( i = 0; i < 3; ++i) {
     {for( j = 0;  j < 3; ++j)
   if (numAleatorio == a[i][j]) {
    return false;
   }
  }
  }
  return true;

  }
  int cartones(int a[3][3], int tabla,  int i, int j, int numAleatorio) {
      for( i = 0; i < 3; ++i)
    { for( j = 0;  j < 3; ++j) {
       numAleatorio=  (rand()%20+1)*tabla;
       while ( prueba(a, i, j, numAleatorio) == false){
         numAleatorio= (rand()%20+1)*tabla;}
    a[i][j] = numAleatorio;}

  }
 for( i = 0; i < 3; ++i)
  {for( j = 0; j < 3; ++j)
   cout<<a[i][j]<<'\t';
   cout<<'\n';
 }return a[3][3];
  }


     int  cantJug= 0;
     int a[3][3], i ,j, jugador1[3][3], jugador2[3][3],jugador3[3][3];
    int numAleatorio;
     int tabla= 0;


int main(){

    cout<<"indica la cantidad de jugadores"<<endl;

    cin>>cantJug;

    cout<<"indica la tabla que quieres jugar"<<endl;

    cin>>tabla;

    while (cantJug!=2 && cantJug!=3) {
   cout << "Numero de jugadores invalido" << endl;
   return 0; break;}


    if (cantJug==2){
     jugador1[3][3]=cartones(a, tabla, i, j, numAleatorio);

     cout<<jugador1<<endl;

     jugador2[3][3]=cartones(a, tabla, i, j, numAleatorio);

     cout<<jugador2<<endl;
    }
    if (cantJug==3) {
     jugador1[3][3]=cartones(a, tabla, i, j, numAleatorio);

     cout<<jugador1<<endl;

     jugador2[3][3]=cartones(a, tabla, i, j, numAleatorio);

     cout<<jugador2<<endl;

     jugador3[3][3]=cartones(a, tabla, i, j, numAleatorio);

     cout<<jugador3<<endl;

    }
    return 0;
   }
