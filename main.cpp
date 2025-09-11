/*
Asignación 1: Binary Digit
Nombre: Teo Richiez Mateo
Núm. Est: 801-234364
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    //inicializacion de variables y seed de srand
    int num_rand1, num_rand2, num_rand3;
    int mayor, medio, menor;
    srand(time(0));

    //despliega proposito del programa
    cout << "Este programa generara tres numeros aleatorios y los organizara!‧₊˚❀༉‧₊˚." << endl;
    
    //define las variables con valores aleatorios delimitados a numeros de 0-1000
    num_rand1 = rand() % (1000 - 0 + 1) + 0;
    num_rand2 = rand() % (1000 - 0 + 1) + 0;;
    num_rand3 = rand() % (1000 - 0 + 1) + 0;

    //despliega los numeros aleatorios
    cout << "Aqui estan tus numeros aleatorios!: " 
         << num_rand1 << ',' << ' '
         << num_rand2 << ',' << ' '
         << num_rand3 << endl;
   

    //Esta seccion establece que numero es el mayor, el mediano o el menor entre los 3
    //Compara el primer numero al segundo y al tercero para establecerlo como el mayor
    //Luego, chequea que segundo sea mayor al tercero
    if (num_rand1 >= num_rand2 | num_rand1 >= num_rand3 && num_rand2 >= num_rand3) 
    {
        mayor = num_rand1;
        medio = num_rand2;
        menor = num_rand3;
    }

    //Compara el primer numero al segundo y al tercero para establecerlo como el mayor
    //Luego, chequea que segundo sea mayor al tercero
    //acb
    else if (num_rand1 >= num_rand2 | num_rand1 >= num_rand3 && num_rand3 >= num_rand2)
    {
        mayor = num_rand2;
        medio = num_rand1;
        menor = num_rand3;
    }

    //bca
     else if (num_rand2 >= num_rand3 | num_rand2 >= num_rand1 && num_rand3 >= num_rand1)
    {   
        mayor = num_rand2;
        medio = num_rand3;
        menor = num_rand1;
    }  

    //cba
    else if (num_rand3 >= num_rand2 | num_rand3 >= num_rand1 && num_rand2 >= num_rand1)
    {
        mayor = num_rand3;
        medio = num_rand2;
        menor = num_rand1;
    }


    //bac
    else if (num_rand2 >= num_rand1 | num_rand2 >= num_rand3 && num_rand1 >= num_rand3)
    {   
        mayor = num_rand2;
        medio = num_rand1;
        menor = num_rand3;
    }    

    //cab
    else if (num_rand3 >= num_rand1 | num_rand3 >= num_rand2 && num_rand1 >= num_rand2)
    {   
        mayor = num_rand3;
        medio = num_rand1;
        menor = num_rand2;
    }   

    else
        cout << "oops, scenario wrong!" << endl;

    //despliega los numeros de mayor a menor
    cout << "Aqui estan los numeros en order!: " 
         << mayor << ' '
         << medio << ' '
         << menor << endl;
    
    return 0;

}
