/*
Asignación 1: Binary Digit
Nombre: Teo Richiez Mateo
Núm. Est: 801-234364 .
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    //Inicializacion de variables y seed de srand
    int num_rand1, num_rand2, num_rand3;
    int num_mayor, num_medio, num_menor;
    srand(time(0));

    //Despliega proposito del programa
    cout << "Este programa generara tres numeros aleatorios y los organizara!‧₊˚❀༉‧₊˚." << endl;
    
    //Define las variables con valores aleatorios delimitados a numeros de 0-1000
    num_rand1 = rand() % (1000 - 0 + 1) + 0;
    num_rand2 = rand() % (1000 - 0 + 1) + 0;;
    num_rand3 = rand() % (1000 - 0 + 1) + 0;

    //Despliega los numeros aleatorios
    cout << "Aqui estan tus numeros aleatorios!: " 
         << num_rand1 << ',' << ' '
         << num_rand2 << ',' << ' '
         << num_rand3 << endl;
   

    //Esta seccion establece que numero es el mayor, el mediano o el menor entre los 3
    //Compara el primer numero al segundo y al tercero para establecerlo como el mayor
    //Luego, chequea que segundo sea mayor al tercero
    if (num_rand1 >= num_rand2 && num_rand1 >= num_rand3 && num_rand2 >= num_rand3) 
    {
        num_mayor = num_rand1;
        num_medio = num_rand2;
        num_menor = num_rand3;
    }

    //Compara el primer numero al segundo y al tercero para establecerlo como el mayor
    //Luego, chequea que segundo sea mayor al tercero
    else if (num_rand1 >= num_rand2 && num_rand1 >= num_rand3 && num_rand3 >= num_rand2)
    {
        num_mayor = num_rand2;
        num_medio = num_rand1;
        num_menor = num_rand3;
    }

    //Compara el segundo numero al tercero y al primero para establecerlo como el mayor
    //Luego, chequea que tercero sea mayor al primero
     else if (num_rand2 >= num_rand3 && num_rand2 >= num_rand1 && num_rand3 >= num_rand1)
    {   
        num_mayor = num_rand2;
        num_medio = num_rand3;
        num_menor = num_rand1;
    }  

    //Compara el tercer numero al segundo y al primero para establecerlo como el mayor
    //Luego, chequea que segundo sea mayor al primero
    //cba
    else if (num_rand3 >= num_rand2 && num_rand3 >= num_rand1 && num_rand2 >= num_rand1)
    {
        num_mayor = num_rand3;
        num_medio = num_rand2;
        num_menor = num_rand1;
    }

    
    //Compara el segundo numero al primero y al tercero para establecerlo como el mayor
    //Luego, chequea que el primero sea mayor al tercero
    else if (num_rand2 >= num_rand1 && num_rand2 >= num_rand3 && num_rand1 >= num_rand3)
    {   
        num_mayor = num_rand2;
        num_medio = num_rand1;
        num_menor = num_rand3;
    }    


    //Compara el tercer numero al primero y al segundo para establecerlo como el mayor
    //Luego, chequea que primero sea mayor al segundo
    else if (num_rand3 >= num_rand1 && num_rand3 >= num_rand2 && num_rand1 >= num_rand2)
    {   
        num_mayor = num_rand3;
        num_medio = num_rand1;
        num_menor = num_rand2;
    }   

    //Despliega los numeros de mayor a menor
    cout << "Aqui estan los numeros en orden descendiente!: " 
         << num_mayor << ',' << ' ' 
         << num_medio << ',' << ' '
         << num_menor << endl;
    
    return 0;

}
